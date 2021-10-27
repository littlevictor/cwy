#include<reg52.h>

sbit led1=P0^5;

void main(){
	EA=1;
	EX0=1;
	IT0=0;
	led1=0;
	while(1){

	}
}
void chufa() interrupt 0{
	led1=~led1;
}