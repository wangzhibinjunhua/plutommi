#include <qrencode.h>
#include <stdio.h>
#include <CreatQr.h>


QRcode *CreatQr(const char *pcStr)
{
	QRcode *qrcode =NULL;
	int i;
	int j;

	qrcode = QRcode_encodeString(pcStr, 3, QR_ECLEVEL_L, QR_MODE_8, 1);
	if(qrcode->version != 3)
	{
		qrcode = QRcode_encodeString(pcStr,qrcode->version, QR_ECLEVEL_L, QR_MODE_8, 1);
	}


printf("============version=%d====================\n",qrcode->version);
for(i=0;i<qrcode->width;i++)
{
	for(j=0;j<qrcode->width;j++)
	{
		if(qrcode->data[i*qrcode->width+j]&0x01)
		{
			printf("#");
		}
		else
		{
			printf("_");
		}
	}
	printf("\n");
}
printf("\n");
	return qrcode;
	
}

