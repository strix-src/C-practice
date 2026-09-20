#include <stdio.h>
long long isprime(long long n);
int main(void){
    printf("请输入一个大于2的偶数\n");
    long long x=1;
    if(scanf("%lld",&x) != 1)return 0;
    if(x<2||x%2!=0){
        printf("输入错误\n");
        return 0;
    }
    long long i,j;
    long long cnt=0;
    for(i=1,j=x-1;i<=j;i++,j--){
        if(isprime(i) && isprime(j)){
            printf("(%lld,%lld)\t",i,j);
            cnt++;
            if(cnt%6==0){
                printf("\n");
            }
        }
    }
    printf("\n一共有%lld组\n",cnt);
    return 0;
}
long long isprime(long long n){
    if(n<2)return 0;
    for(long long a=2;a*a<=n;a++){
        if(n%a == 0){
            return 0;
        }
    }
    return 1;
}
