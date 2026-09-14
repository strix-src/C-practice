#include <stdio.h>

long long isPrime(long long n);

int main(){
    long long x,a;
    int cnt=10;
    scanf("%lld",&x);
    for(a=2;a<x;a++){
        if(isPrime(a)){
            printf("%lld\t",a);
            cnt++;
            if(cnt%10 == 0){
                printf("\n");
            }
        }

    }
    printf("\n");
    return 0;
}

long long isPrime(long long n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for (long long i=3;i*i<=n;i += 2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}



