//程伟业 2021280396
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int shaizi, _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0, _123 = 0, i = 0;
	int flag1 = 0, flag2 = 0, flag3 = 0;
	float a, b, c, d, e, f, g, h;
	srand((unsigned)time(NULL));
	while (i <= 10000) {
		i++;
		shaizi = rand() % 6 + 1;
		if (shaizi == 1)
			_1++;
		else if (shaizi == 2)
			_2++;
		else if (shaizi == 3)
			_3++;
		else if (shaizi == 4)
			_4++;
		else if (shaizi == 5)
			_5++;
		else if (shaizi == 6)
			_6++;
		
		if (shaizi == 3 || flag2 == 1) {
			if (shaizi == 3 && flag2 == 1) {
				flag3++;
			}if (shaizi == 3 && flag2 != 1) {
				
			}if (shaizi != 3 && flag2 == 1) {
				flag2 = 0;
				flag1 = 0;
			}
		}

		if (shaizi == 2 || flag1==1) {
			if (shaizi == 2 && flag1 == 1) {
				flag2 = 1;
			}if (shaizi == 2 && flag1 != 1) {
				
			}if (shaizi != 2 && flag1 == 1) {
				flag1 = 0;
			}
		}

		if (shaizi == 1) {
			flag1 = 1;
		}
		
	}
	a = (float)_1 / 10000;
	b = (float)_2 / 10000;
	c = (float)_3 / 10000;
	d = (float)_4 / 10000;
	e = (float)_5 / 10000;
	f = (float)_5 / 10000;
	g = (float)flag3 / 10000;

	printf("点1一共出现了%d次，出现概率为%lf\n", _1,a);
	printf("点2一共出现了%d次，出现概率为%lf\n", _2,b);
	printf("点3一共出现了%d次，出现概率为%lf\n", _3,c);
	printf("点4一共出现了%d次，出现概率为%lf\n", _4,d);
	printf("点5一共出现了%d次，出现概率为%lf\n", _5,e);
	printf("点6一共出现了%d次，出现概率为%lf\n", _6,f);
	printf("1，2，3点连续出现的次数为%d，出现概率为%lf\n", flag3,g);
}