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
	//���Ƕ�rand�������г�ʼ����ͬʱ���ɳ���սʿ������ת�̵Ĳ���{
	num = init();
	W = num % 100;
	Wa = num % 10 + 80;
	Wb = num % 10 + 40;
	Wc = num % 10 + 60;
	Wd = num % 10 + 10;
	//}
	//������������û��Գ���սʿ�������������{
	printf("�����������ڵ�x����");
	scanf_s("%d", &x);
	printf("\n\n�����������ڵ�y����");
	scanf_s("%d", &y);
	//}
	//���Ƕ���������ݽ����жϳ���սʿ����������{
	area = zuobiao(x,y);
	//}
	//�������Ҫ��������ת�����������������Ҫת�������û��ڼ����ϰ���
	if (area != 'O'&&area!='E'&&area!='F') {
		printf("���ڼ������������һ������ת������\n");
		shuru = _getch();
	}
	//}
	//���ǻ�������������Ľ��{
	jiuren(area);
	//}
	return 0;
}

int zuobiao(intx, inty) {
	if (x > 0 && x < 799 && y>0 && y < 160) {
		area = 'C';
		printf("\n\n��������C����С�ĵ��������\n\n");
	}
	else if (x > 0 && x < 155 && y>160 && y < 481) {
		area = 'B';
		printf("\n\n��������B����С�������壡\n\n");
	}
	else if (x > 155 && x < 457 && y>160 && y < 481) {
		area = 'O';
		printf("\n\n��������O������ȥ������ʣ�\n\n");
	}
	else if (x > 457 && x < 779 && y>160 && y < 481) {
		area = 'D';
		printf("\n\n��������D�������Բ���������\n\n");
	}
	else if (x > 0 && x < 779 && y>481 && y < 562) {
		area = 'A';
		printf("\n\n��������A����С�ĵ��ף�\n\n");
	}
	else if (x < 0 || x>779 || y < 0 || y>562) {
		area = 'E';
		printf("\n\n�����������������⣡\n\n");
	}
	else {
		area = 'F';
		printf("\n\n�������˱߽�����ϣ�\n\n");
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
		printf("������ɣ��ȳ�����");
		break;
	case'A':
		printf("��Ķ��������ǣ�%d\n�����Ķ��̵������ǣ�%d\n ", W, Wa);
		if (W < Wa) {
			printf("���ױ�ը������ʧ�ܣ�");
		}else {
			printf("�ɹ���������O����������ʳɹ���");
		}break;
	case'B':
		printf("��Ķ��������ǣ�%d\n�����Ķ��̵������ǣ�%d\n ", W, Wb);
		if (W < Wb) {
			printf("�������壬����ʧ�ܣ�");
		}else {
			printf("�ɹ���������O����������ʳɹ���");
		}break;
	case'C':
		printf("��Ķ��������ǣ�%d\n�����Ķ��̵������ǣ�%d\n ", W, Wc);
		if (W < Wc) {
			printf("�⵽����������ʧ�ܣ�");
		}else {
			printf("�ɹ���������O����������ʳɹ���");
		}break;
	case'D':
		printf("��Ķ��������ǣ�%d\n�����Ķ��̵������ǣ�%d\n ", W, Wd);
		if (W < Wd) {
			printf("������ʧ������ʧ�ܣ�");
		}else {
			printf("�ɹ���������O����������ʳɹ���");
		}break;
	default:
		printf("����ʧ�ܣ�");
		break;
	}
}
