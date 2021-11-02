#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int num, x, y,W, Wa, Wb, Wc, Wd,shuru;
char area,area1;

int zuobiao(int, int);
int init();
void jiuren(char*);

int main() {
	//这是对rand函数进行初始化，同时生成超级战士和守卫转盘的部分{
	num = init();
	W = num % 100;
	Wa = num % 10 + 80;
	Wb = num % 10 + 40;
	Wc = num % 10 + 60;
	Wd = num % 10 + 10;
	//}
	//这个部分是由用户对超级战士的坐标进行输入{
	printf("请输入你现在的x坐标");
	scanf_s("%d", &x);
	printf("\n\n请输入你现在的y坐标");
	scanf_s("%d", &y);
	//}
	//这是对输入的数据进行判断超级战士所处的区域{
	area = zuobiao(x,y);
	//}
	//如果不需要进行轮盘转动环节则跳过，如果要转，则请用户在键盘上按键
	if (area != 'O'&&area!='E'&&area!='F') {
		printf("请在键盘上随机键入一个按键转动轮盘\n");
		shuru = _getch();
	}
	//}
	//这是基于轮盘输出最后的结果{
	jiuren(area);
	//}
	return 0;
}

int zuobiao(intx, inty) {
	if (x > 0 && x < 799 && y>0 && y < 160) {
		area = 'C';
		printf("\n\n你现在在C区，小心敌人埋伏！\n\n");
	}
	else if (x > 0 && x < 155 && y>160 && y < 481) {
		area = 'B';
		printf("\n\n你现在在B区，小心有陷阱！\n\n");
	}
	else if (x > 155 && x < 457 && y>160 && y < 481) {
		area = 'O';
		printf("\n\n你现在在O区，快去解救人质！\n\n");
	}
	else if (x > 457 && x < 779 && y>160 && y < 481) {
		area = 'D';
		printf("\n\n你现在在D区，可以补充武器！\n\n");
	}
	else if (x > 0 && x < 779 && y>481 && y < 562) {
		area = 'A';
		printf("\n\n你现在在A区，小心地雷！\n\n");
	}
	else if (x < 0 || x>779 || y < 0 || y>562) {
		area = 'E';
		printf("\n\n你落在了任务区域外！\n\n");
	}
	else {
		area = 'F';
		printf("\n\n你落在了边界点网上！\n\n");
	}
	return area;
	//printf("%c", area);
}

int init() {
	srand((unsigned)time(NULL));
	num = rand();
	return num;
}

void jiuren(char* area) {
	area1 = area;
	switch (area1) {
	case 'O':
		printf("任务完成，救出人质");
		break;
	case'A':
		printf("你的赌盘数字是：%d\n门卫的赌盘的数字是：%d\n ", W, Wa);
		if (W < Wa) {
			printf("地雷爆炸，任务失败！");
		}else {
			printf("成功进入人质O区，解救人质成功！");
		}break;
	case'B':
		printf("你的赌盘数字是：%d\n门卫的赌盘的数字是：%d\n ", W, Wb);
		if (W < Wb) {
			printf("掉入陷阱，任务失败！");
		}else {
			printf("成功进入人质O区，解救人质成功！");
		}break;
	case'C':
		printf("你的赌盘数字是：%d\n门卫的赌盘的数字是：%d\n ", W, Wc);
		if (W < Wc) {
			printf("遭到伏击，任务失败！");
		}else {
			printf("成功进入人质O区，解救人质成功！");
		}break;
	case'D':
		printf("你的赌盘数字是：%d\n门卫的赌盘的数字是：%d\n ", W, Wd);
		if (W < Wd) {
			printf("武器丢失，任务失败！");
		}else {
			printf("成功进入人质O区，解救人质成功！");
		}break;
	default:
		printf("任务失败！");
		break;
	}
}
