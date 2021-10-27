#include<reg52.h>

unsigned char code A_a[]="hello world!";
unsigned char code A_b[]="\n";

unsigned char flag,a,i;

void init(){
	TMOD=0x20;
	TH1=0xfd;
	TL1=0xfd;
	TR1=1;
	REN=1;
	SM0=0;
	SM1=1;
	EA=1;
	ES=1;
}

void main(){
	init();
	while(1){
		if(flag==1){
			ES=0;
			for(i=0;i<12;i++){
				SBUF=A_a[i];
				while(!TI);
				TI=0;
			}
			a=A_b[0];               //bu guan shu ru shen me fan hui zhi dou wei kong
			SBUF=a;
			while(!TI);
			TI=0;
			ES=1;
			flag=0;
		}
	}
}
void ser() interrupt 4
{
	RI=0;
	a=SBUF;
	flag=1;
}
			
	