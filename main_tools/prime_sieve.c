#include <stdio.h>
#include "prime_sieve.h"
char isprime[100000000];

void prime_sieve(long long n){
    isprime[0]=1;
    isprime[1]=1;
    if(n>100000000 || n<0)return;
    for(long long i=2;i*i<=n;i++){
        if(isprime[i]==0){
            for(long long j=i*i;j<=n;j+=i){
                isprime[j]=1;
            }
        }
    }
}
