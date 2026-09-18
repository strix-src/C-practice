#include <stdio.h>
int main(void){
    printf("请输入俩个数\n");
    long long a,b,i,t;
    long long sum;
    scanf("%lld %lld",&a,&b);
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    long long cnt=0;
    for(;a<=b;a++){
        if(a<2)continue;
    int isprime=1;
        for(i=2;i*i<=a;i++){
            if(a%i == 0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            cnt++;
            sum+=a;
        }
    }
    printf("在此之间一共有%lld个素数，它们的和为%lld。\n",cnt,sum);
    return 0;
}
