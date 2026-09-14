#include <stdio.h>
int main()
{
    long long a;
    long long i;
    int isPrime=1;
    printf(" 请随机输入一个数，我将判断是否为素数\n");
    scanf("%lld",&a);
    for (i=2;i<a;i++){
        if(a%i == 0){
            isPrime=0;
            break; 
        }
    }
    if(isPrime == 0){
        printf("这不是一个素数\n");
    }else{
        printf("这是一个素数\n");
    }
    return 0;
}

