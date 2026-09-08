#include <stdio.h> 

int main(void)
{
    int a;
    scanf("%d",&a);
    int bai=a/100;
    int shi=a/10%10;
    int ge=a%100%10;
    int rev=bai+shi*10+ge*100;
    printf("%d\n",rev);

    return 0;
}
