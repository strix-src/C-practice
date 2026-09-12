#include <stdio.h>
int main(void)
{
    long long n=0,x=0;
    scanf("%lld",&x);
    do{
        n++;
        x/=10;}
     while(x>0);
    printf("这个数字的位数是%lld\n",n);
    return 0;
}
