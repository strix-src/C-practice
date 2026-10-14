#include <stdio.h>
int main(void){
    printf("请输入一个十以内的数\n");
    int n;
    if(scanf("%d",&n)!=1)return 0;
    long long start=1;
    for(int i=1;i<n;i++){
        start*=10;
    }
    long long end=start*10-1;
    for(long long num=start;num<=end;num++){
        long long sum=0;
        for(long long temp=num;temp>0;temp/=10){
            long long x=temp%10;
            int p=1;
            for(int k=1;k<=n;k++){
            p*=x;
            }
            sum+=p;
        }
        if(sum == num){
            printf("%lld\n",num);
        }
    }
    return 0;
}

