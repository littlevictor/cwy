//��ΰҵ 2021280396
#include<stdio.h>

int main() {
	
	int a, b, c, i=0;
	int shuixian=0;

	for(a=0;a<10;a++)
		for(b=0;b<10;b++)
			for (c = 0; c < 10; c++) {
				shuixian = a * 100 + b * 10 + c;
				if (shuixian == a * a * a + b * b * b + c * c * c&& shuixian >= 100) {
					i++;
					printf("��%d��ˮ�ɻ����ǣ�%d\n", i, shuixian);
				}
			}
	printf("�ܹ���%d��ˮ�ɻ���\n", i);
}