#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
    int a, b;
    int s1 =0, s2=0, s3=0;

    printf("정수 두 개를 입력하시오: \n");
    scanf_s("%d %d", &a, &b);

    s1 = a * (b % 10);
    s2 = a * (b/100-s1);
    s3 = a * (b/ 100);

    printf("%d", s1);

    return 0;

}