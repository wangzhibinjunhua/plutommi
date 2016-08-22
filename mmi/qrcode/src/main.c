#include <qrencode.h>
#include <CreatQr.h>
#include <stdio.h>
const char *str0 ="si";
	const char *str1 ="http://www.bai";
	const char *str2 ="http://www.baidu.com";
	const char *str3 ="http://www.jose.it-berater.org/smfforum/index.php?topic=4444.0";
	const char *str4 = "http://www.baidu.com/s?wd=asdada&rsv_spt=1&issp=1&rsv_bp=0&ie=utf-8&tn=baiduhome_pg&f=3&inputT=2780";

int main(int argc, char **argv)
{

	QRcode *qrcode;

	
	printf("123\n");

	Fb_init();

	printf("fb init ok");

	qrcode = CreatQr(str0);
	Fb_QrDisp(2,2,qrcode);

	qrcode = CreatQr(str1);
	Fb_QrDisp(100,2,qrcode);
	qrcode = CreatQr(str2);
	Fb_QrDisp(2,100,qrcode);
	qrcode = CreatQr(str3);
	Fb_QrDisp(100,100,qrcode);
	qrcode = CreatQr(str4);
	Fb_QrDisp(2,200,qrcode);

	return 0;
}


