#include<reg52.h>

sbit SEG_DLE=P2^6;
sbit SEG_WLE=P2^7;

char code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
unsigned int count=0,result=0,a,b,c,d,temp,zongshu=0;

void delay(unsigned int x){
	unsigned int i,j;
	for(i=x;i>0;i--)
		for(j=110;j>0;j--);
}

int key(){                    //cong di san ti copy de
  P3=0xfe;                    //yong count de zen jia ji lu
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
				count=count+3;
				break;
				case 0xf6:
				count=count+2;
				break;
			}
			while(temp!=0xfc){
				temp=P3;
				temp&=0xfc;
			}
		}
	}
	P3=0xfd;
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
				count=count+5;
				break;
				case 0xf5:
				count=count+4;
				break;
			}
			while(temp!=0xfc){
				temp=P3;
				temp&=0xfc;
			}
		}
	}
	result=count;
	return result;           //dan yi chu kou,li pu
}

void main(){               //cong ji shi qi copy de
	while(1){
		key();
		zongshu=key();
		a=zongshu%10;
		b=zongshu%100/10;
		c=zongshu&1000/100;
		d=zongshu/1000;
		if(1){
			SEG_DLE=1;
			P0=table[a];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xf7;
			SEG_WLE=0;
			delay(1);
		}
		if(b!=0){
			SEG_DLE=1;
			P0=table[b];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xfb;
			SEG_WLE=0;
			delay(1);
		}
		if(c!=0){
			SEG_DLE=1;
			P0=table[c];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xfd;
			SEG_WLE=0;
			delay(1);
		}
		if(d!=0){
			SEG_DLE=1;
			P0=table[d];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xfe;
			SEG_WLE=0;
			delay(1);
		}
	}
}