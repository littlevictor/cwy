#include<stdio.h>
char s;
int age, math, physic, chemistry, english;
double high, weigh;
int main() {
    printf("\n");
    printf(" ����������꼶��һ��������������Ͷ�ӦA��B��C��D����"); s = getchar(); printf("\n");
    printf(" ������������䣨�������꣩��"); scanf_s("%d", &age); printf("\n");
    printf(" �����������ߣ�ʵ�����ף���"); scanf_s("%lf", &high); printf("\n");
    printf(" ������������أ�ʵ���������"); scanf_s("%lf", &weigh); printf("\n");
    printf(" �����������ѧ�ɼ����������ٷ��ƣ���"); scanf_s("%d", &math); printf("\n");
    printf(" �������������ɼ����������ٷ��ƣ���"); scanf_s("%d", &physic); printf("\n");
    printf(" ���������Ӣ��ɼ����������ٷ��ƣ���"); scanf_s("%d", &english); printf("\n");
    printf(" ��������Ļ�ѧ�ɼ����������ٷ��ƣ���"); scanf_s("%d", &chemistry); printf("\n");
    printf("����ۺ���Ϣ���£�\n\n");
    printf("����꼶��"); putchar(s); printf("\n");
    printf("������䣺%d ��\n", age);
    printf("�����ߣ�%.2lf ��\n", high);
    printf("������أ�%.2lf ����\n\n", weigh);
    printf("�����ѧ�ɼ���%d ��\n", math);
    printf("�������ɼ���%d ��\n", physic);
    printf("��Ļ�ѧ�ɼ���%d ��\n", chemistry);
    printf("���Ӣ��ɼ���%d ��\n\n", english);
    printf("����������ӣ�%.2lf\n", weigh / high);
    printf("��Ŀγ�ƽ���ɼ���%.2lf ��\n", (math + physic + english + chemistry) / 4.0);
}