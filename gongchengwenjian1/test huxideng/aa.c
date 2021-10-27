#include<reg52.h>

sbit led0=P0^4;

void delay(unsigned int a){           //delay tai chang le
	while(--a);   
}

unsigned int time,i;

int main(){                           //chu shi hua
		led0=1;
	time=1000,i=0;                      //1000=1000/110ms 
	while(1){
		for(i=1;i<time;i++){              //tiao zheng liang shan zhan bi
			led0=0;
			delay(i);
			led0=1;
			delay(time-i);
		}
		for(i=999;i>0;i--){
			led0=0;
			delay(i);
			led0=1;
			delay(time-i);
		}
	}
}

