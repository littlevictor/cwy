#include<stdio.h>
char s;
int age, math, physic, chemistry, english;
double high, weigh;
int main() {
    printf("\n");
    printf(" 请输入你的年级（一、二、三、四年纪对应A，B，C，D）："); s = getchar(); printf("\n");
    printf(" 请输入你的年龄（整数，岁）："); scanf_s("%d", &age); printf("\n");
    printf(" 请输入你的身高（实数：米）："); scanf_s("%lf", &high); printf("\n");
    printf(" 请输入你的体重（实数：公斤）："); scanf_s("%lf", &weigh); printf("\n");
    printf(" 请输入你的数学成绩（整数，百分制）："); scanf_s("%d", &math); printf("\n");
    printf(" 请输入你的物理成绩（整数，百分制）："); scanf_s("%d", &physic); printf("\n");
    printf(" 请输入你的英语成绩（整数，百分制）："); scanf_s("%d", &english); printf("\n");
    printf(" 请输入你的化学成绩（整数，百分制）："); scanf_s("%d", &chemistry); printf("\n");
    printf("你的综合信息如下：\n\n");
    printf("你的年级："); putchar(s); printf("\n");
    printf("你的年龄：%d 岁\n", age);
    printf("你的身高：%.2lf 米\n", high);
    printf("你的体重：%.2lf 公斤\n\n", weigh);
    printf("你的数学成绩：%d 分\n", math);
    printf("你的物理成绩：%d 分\n", physic);
    printf("你的化学成绩：%d 分\n", chemistry);
    printf("你的英语成绩：%d 分\n\n", english);
    printf("你的体重因子：%.2lf\n", weigh / high);
    printf("你的课程平均成绩：%.2lf 分\n", (math + physic + english + chemistry) / 4.0);
}