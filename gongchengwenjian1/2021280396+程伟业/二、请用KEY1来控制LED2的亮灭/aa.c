#include<reg52.h>

sbit LED2=P0^6;
sbit key1=P3^3;
sbit SEG_WLE=P2^7;

void delay(unsigned int x){
	unsigned int i,j;
	for(i=x;i>0;i--)
		for(j=110;j>0;j--);
}

void key(){
	if(key1==0){
		delay(15);
		if(key1==0){
			LED2=~LED2;
			while(!key1);
		}
	}
}

void main(){
	while(1){
		key();
	}
}