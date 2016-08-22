#include <qrencode.h>

#include <split.h>


#include <CreatQr.h>

//#include <sys/mman.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <unistd.h>
//#include <linux/fb.h>
//#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "fbdev_window.h"


typedef struct FBINFO{
	struct fb_var_screeninfo var;
	struct fb_fix_screeninfo fix;
	unsigned int fd;
	unsigned int screen_size;
	unsigned int line_width;
	unsigned int pixel_width;
	unsigned char *pmap;
}T_FBINFO,*PT_FBINFO;

typedef struct PixelDatas {
	int iWidth;
	int iHeight;
	int iLineBytes;
	unsigned char *aucPixelDatas;
}T_PixelDatas, *PT_PixelDatas;


PT_FBINFO g_ptfbinfo=NULL;



static int PicZoom(PT_PixelDatas ptOriginPic, PT_PixelDatas ptZoomPic)
{
    unsigned long dwDstWidth = ptZoomPic->iWidth;
    unsigned long* pdwSrcXTable = malloc(sizeof(unsigned long) * dwDstWidth);
	unsigned long x;
	unsigned long y;
	unsigned long dwSrcY;
	unsigned char *pucDest;
	unsigned char *pucSrc;
//	unsigned long dwPixelBytes = ptOriginPic->iBpp/8;

	
    for (x = 0; x < dwDstWidth; x++)//生成表 pdwSrcXTable
    {
        pdwSrcXTable[x]=(x*ptOriginPic->iWidth/ptZoomPic->iWidth);
    }

    for (y = 0; y < ptZoomPic->iHeight; y++)
    {			
        dwSrcY = (y * ptOriginPic->iHeight / ptZoomPic->iHeight);

		pucDest = ptZoomPic->aucPixelDatas + y*ptZoomPic->iLineBytes;
		pucSrc  = ptOriginPic->aucPixelDatas + dwSrcY*ptOriginPic->iLineBytes;
		
        for (x = 0; x <dwDstWidth; x++)
        {
            /* 原图座标: pdwSrcXTable[x]，srcy
             * 缩放座标: x, y
			 */
			 memcpy(pucDest+x, pucSrc+pdwSrcXTable[x], 1);
        }
    }

    free(pdwSrcXTable);
	return 0;
}


static void lcd_pixel_show(int x, int y, unsigned int color)
{
	unsigned char *pen_8 = g_ptfbinfo->pmap+y*g_ptfbinfo->line_width+x*g_ptfbinfo->pixel_width;
	unsigned short *pen_16;	
	unsigned int *pen_32;	

	unsigned int red, green, blue;	

	pen_16 = (unsigned short *)pen_8;
	pen_32 = (unsigned int *)pen_8;

	switch (g_ptfbinfo->var.bits_per_pixel)
	{
		case 8:
		{
			*pen_8 = color;
			break;
		}
		case 16:
		{
			/* 565 */
			red   = (color >> 16) & 0xff;
			green = (color >> 8) & 0xff;
			blue  = (color >> 0) & 0xff;
			color = ((red >> 3) << 11) | ((green >> 2) << 5) | (blue >> 3);
			*pen_16 = color;
			break;
		}
		case 32:
		{
			*pen_32 = color;
			break;
		}
		default:
		{
			printf("can't surport %dbpp\n",g_ptfbinfo->var.bits_per_pixel);
			break;
		}
	}
}


int Fb_init(void)
{
//初始化LCD

	g_ptfbinfo = malloc(sizeof(T_FBINFO));
	if(g_ptfbinfo ==NULL)
	{
		printf("[FB]:p_fbinfo malloc failed\n");
		goto err1;
	
	}
	g_ptfbinfo->fd = open("/dev/fb0", 2);
	if (g_ptfbinfo->fd < 0)
	{
		printf("[FB]:/dev/fb0 can't open\n");
		goto err2;
	}




	g_ptfbinfo->pixel_width = (g_ptfbinfo->var.bits_per_pixel >> 3);
	g_ptfbinfo->line_width = g_ptfbinfo->var.xres * g_ptfbinfo->pixel_width;
	g_ptfbinfo->screen_size = g_ptfbinfo->var.yres * g_ptfbinfo->line_width;


	g_ptfbinfo->pmap = (unsigned char *)mmap(0, g_ptfbinfo->screen_size,PROT_READ \
									 | PROT_WRITE,	MAP_SHARED, g_ptfbinfo->fd, 0);

	if (g_ptfbinfo->pmap == (unsigned char *)-1)
	{
		printf("[FB]:pmap can't mmap\n");
		goto err3;
	}

    memset(g_ptfbinfo->pmap, 0xffffff,g_ptfbinfo->screen_size );
	goto done;	
err3:
	//close(g_ptfbinfo->fd);
err2:
	//free(g_ptfbinfo);
err1:
	return -1;
done:
	printf("return\n");
	return 0;

}

void Disp_FixelPic(int iPenX,int iPenY,PT_PixelDatas ptPixelDatas)
{
	int i,j;
	for(i=0;i<ptPixelDatas->iHeight;i++)
	{
		for(j=0;j<ptPixelDatas->iWidth;j++)
		{
			if(ptPixelDatas->aucPixelDatas[i*ptPixelDatas->iHeight+j]&0x01)
			{
				lcd_pixel_show(j+iPenX, i+iPenY,0x00);
				
			}
			else
			{
				lcd_pixel_show(j+iPenX, i+iPenY, 0xffffff);
				
			}
		}
		
	}	
}

int Fb_QrDisp(int iPenX,int iPenY,QRcode *pQRcode)
{
	T_PixelDatas g_tOriginPixelDatas;
	T_PixelDatas g_tZoomPixelDatas;
	int iZoom;
	int i;
	
	g_tOriginPixelDatas.iWidth = pQRcode->width;
	g_tOriginPixelDatas.iHeight= pQRcode->width;
	g_tOriginPixelDatas.iLineBytes= g_tOriginPixelDatas.iWidth;
	g_tOriginPixelDatas.aucPixelDatas = pQRcode->data;

    if(pQRcode->version <= 1)
    {
		iZoom = 2;
    }
	else
	{
		iZoom = 2;
	}
    g_tZoomPixelDatas.iWidth = pQRcode->width*iZoom;
	g_tZoomPixelDatas.iHeight= pQRcode->width*iZoom;
	g_tZoomPixelDatas.iLineBytes= g_tZoomPixelDatas.iWidth;
	g_tZoomPixelDatas.aucPixelDatas = malloc(g_tZoomPixelDatas.iWidth*\
		                                      g_tZoomPixelDatas.iHeight);

	if(g_tZoomPixelDatas.aucPixelDatas == NULL)
	{
		printf("g_tZoomPixelDatas->aucPixelDatas malloc failed\n");
		return -1;
	}

	PicZoom(&g_tOriginPixelDatas, &g_tZoomPixelDatas);
#if 0
	printf("g_tZoomPixelDatas.iWidth=%d,g_tZoomPixelDatas.iHeight=%d\n",\
	       g_tZoomPixelDatas.iWidth,g_tZoomPixelDatas.iHeight);


for(i=0;i<(g_tZoomPixelDatas.iWidth*g_tZoomPixelDatas.iHeight);i++)
{
	printf("0x%x,",g_tZoomPixelDatas.aucPixelDatas[i]);
}
printf("\n");

#endif
	Disp_FixelPic(iPenX,iPenY,&g_tZoomPixelDatas);
return 0;	
}

