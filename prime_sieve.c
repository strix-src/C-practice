#include <stdio.h>
char isprime[100000000];

int main(){
    printf("请输入一个数\n");
    long long n;
    scanf("%lld",&n);
    isprime[0]=1;
    isprime[1]=1;
    if(n>100000000 || n<0)return 0;
    for(long long i=2;i*i<=n;i++){
        if(isprime[i]==0){
            for(long long j=i*i;j<=n;j+=i){
                isprime[j]=1;
            }
        }
    }
    long long cnt=0;
    for(long long i=0;i<=n;i++){
        if(isprime[i]==0){
            printf("%lld\t",i);
            cnt++;
            if(cnt%10==0){
                printf("\n");
            }
        }
    }
        printf("\n在%lld里面一共有%lld个素数\n",n,cnt);
    return 0;
}

