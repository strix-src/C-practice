#include <stdio.h>
int main(void)
{
    int n=0;
    long long x;

    scanf("%lld",&x);
    while(x>0){
        n++;
        x/=10;
    }
    if (n==0) n=1;
    printf("这个数字的位数是%d\n",n);
    return 0;
}
    
    
