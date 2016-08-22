#ifndef _CREAT_QR_H
#define _CREAT_QR_H

#include <qrencode.h>

QRcode *CreatQr(const char *pcStr);
int Fb_QrDisp(int iPenX,int iPenY,QRcode *pQRcode);
int Fb_init(void);

#endif
