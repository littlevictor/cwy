#include<reg52.h>

sbit led3=P0^7;
sbit led2=P0^6;
sbit led0=P0^4;
sbit led1=P0^5;

unsigned int temp;

void delay(unsigned int x){
	unsigned int i,j;
	for(i=x;i>0;i--)
		for(j=110;j>0;j--);
}
void key(){
  P3=0xfe;             //sao miao di yi pai
	temp=P3;
	temp&=0xfc;
	if(temp!=0xfc){
		delay(10);
		temp=P3;
		temp&=0xfc;
		if(temp!=0xfc){
			temp=P3;
			switch(temp){
				case 0xfa:
				led1=0;
				break;
				case 0xf6:
				led0=0;
				break;
			}
			while(temp!=0xfc){   //song jian guan deng
				temp=P3;
				temp&=0xfc;
			}
			led0=1;
			led1=1;
		}
	}
	P3=0xfd;      //sao miao di er pai
	temp=P3;
	temp&=0xfc;
	if(temp!=0xfc){
		delay(10);
		temp=P3;
		temp&=0xfc;
		if(temp!=0xfc){
			temp=P3;
			switch(temp){
				case 0xf9:
				led3=0;
				break;
				case 0xf5:
				led2=0;
				break;
			}
			while(temp!=0xfc){    // song jian guan deng
				temp=P3;
				temp&=0xfc;
			}
			led2=1;
			led3=1;
		}
	}
}

void main(){
	while(1){
		key();
	}
}