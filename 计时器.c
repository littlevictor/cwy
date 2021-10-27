#include<reg52.h>

sbit SEG_DLE=P2^6;
sbit SEG_WLE=P2^7;

char code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};

unsigned int k,time,a,b,c,d,flag1,flag2,flag3;    //shi jian yong quan ju bian liang

void delay(unsigned int x){
	unsigned int i,j;
	for(i=x;i>0;i--)
		for(j=110;j>0;j--);
}

void init(){    //chu shi hua
	TMOD=0x01;
	TH0=0x4c;
	TL0=0x00;
	EA=1;
	ET0=1;
	TR0=1;
}

void main(){
	init();
	while(1){             //qu chu ji shi qi de shu zi
		a=time%10;
		b=time%100/10;
		c=time%1000/100;
		d=time/1000;
		if(1){           //mei dang jin wei ze kai qi xia ge shu ma guan
			SEG_DLE=1;
			P0=table[a];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xf7;
			SEG_WLE=0;
			delay(1);
		}
		if(b!=0||flag1==1){
			SEG_DLE=1;
			P0=table[b];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xfb;
			SEG_WLE=0;
			delay(1);
			flag1=1;
		}
		if(c!=0||flag2==1){
			SEG_DLE=1;
			P0=table[c];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xfd;
			SEG_WLE=0;
			delay(1);
			flag2=1;
		}
		if(d!=0||flag3==1){
			SEG_DLE=1;
			P0=table[d];
			SEG_DLE=0;
			P0=0xff;
			SEG_WLE=1;
			P0=0xfe;
			SEG_WLE=0;
			delay(1);
			flag3=1;
		}
	}
}

void time0() interrupt 1{           //ding shi qi zhong duan 
	TH0=0x4c;                         //shang wang cha de 50ms ying gai zhe me zhuang zai
	TL0=0x00;
	k++;
	if(k==20){                        // 50ms*20=1s  (xi wang jin zhen shi yi yang de)
		k=0;
		time++;
	}
}
	