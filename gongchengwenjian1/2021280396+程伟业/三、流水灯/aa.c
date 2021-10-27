#include<reg52.h>

sbit LED0=P0^4;
sbit LED1=P0^5;
sbit LED2=P0^6;
sbit LED3=P0^7;
sbit SEG_WLE=P2^7;
sbit SEG_DLE=P2^6;
sbit key0=P3^2;

unsigned int flag;

void delay(unsigned int x){
	unsigned int i,j;
	for(i=x;i>0;i--)
		for(j=110;j>0;j--);
}

void init(){   //chu shi hua
	EA=1;
	EX0=1;
	IT0=1;
}

void main(){    
	init();
	SEG_WLE=0;  // suo cun xian guan diao
	while(1){
		LED0=~LED0;
		delay(500);
		LED1=~LED1;
		delay(500);
		LED2=~LED2;
		delay(500);
		LED3=~LED3;
		delay(500);
	}
}

void zhongduan() interrupt 0{   //suo cun huan zhuang tai
	SEG_WLE=~SEG_WLE;
}



