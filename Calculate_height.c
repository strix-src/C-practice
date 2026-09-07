#include<stdio.h>
int main()
{
    printf("请分别输入身高的英尺和英寸,如输入5 7代表5尺7寸");
    double foot;
    double inch;
    scanf("%lf %lf",&foot,&inch);
    printf("你的身高是%f\n" ,(foot+inch/12.0)*0.3048);
    return 0;
}


