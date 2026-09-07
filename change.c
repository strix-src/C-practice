#include<stdio.h>

int main()
{
    int price ;
    printf("请输入金额（元）");
    scanf("%d",&price); 
    int change = 100 - price;
    printf("找您%d钱\n",change);
    return 0;
}

  

