#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a/100*60+a%100;
    int d=c+b;
    printf("之后的时间为%d%d。\n",d/60,d%60);
    return 0;
}
