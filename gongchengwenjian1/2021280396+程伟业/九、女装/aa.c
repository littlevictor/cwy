#include<reg52.h>
#include<stdlib.h>

unsigned char code A_a[]="Error!";
unsigned char code B_b[]="0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18";

unsigned char flag,a,i,shuzi;

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
			shuzi=atoi(a);
			switch(shuzi){
				case 32:
				SBUF=B_b[0];
				while(!TI);
				break;
				case 33:
				SBUF=B_b[1];
				while(!TI);
				break;
				case 34:
				SBUF=B_b[2];
				while(!TI);
				break;
				case 35:
				SBUF=B_b[3];
				while(!TI);
				break;
				case 36:
				SBUF=B_b[4];
				while(!TI);
				break;
				case 37:
				SBUF=B_b[5];
				while(!TI);
				break;
				case 38:
				SBUF=B_b[6];
				while(!TI);
				break;
				case 39:
				SBUF=B_b[7];
				while(!TI);
				break;
				case 41:
				SBUF=B_b[8];
				while(!TI);
				break;
				case 42:
				SBUF=B_b[9];
				while(!TI);
				break;
				case 43:
				SBUF=B_b[10];
				while(!TI);
				break;
				case 44:
				SBUF=B_b[11];
				while(!TI);
				break;
				case 45:
				SBUF=B_b[12];
				while(!TI);
				break;
				case 46:
				SBUF=B_b[13];
				while(!TI);
				break;
				case 47:
				SBUF=B_b[14];
				while(!TI);
				break;
				case 48:
				SBUF=B_b[15];
				while(!TI);
				break;
				case 49:
				SBUF=B_b[16];
				while(!TI);
				break;
				case 50:
				SBUF=B_b[17];
				while(!TI);
				break;
				default:
				for(i=0;i<8;i++){
				SBUF=A_a[i];
				while(!TI);
				TI=0;
				}	

			}				
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