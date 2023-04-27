#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double w, h, area, permeter;

    printf("사각형의 가로는 얼마입니까?\n");
    scanf_s("%lf", &w);
    printf("사각형의 세로는 얼마입니까?\n");
    scanf_s("%lf", &h);

    area = w * h;
    permeter = 2*(w+h);

    printf("사각형의 넓이 : %lf, 사각형의 둘레: %lf\n", area, permeter);

    return 0;


}