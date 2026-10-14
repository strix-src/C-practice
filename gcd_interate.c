#include <stdio.h>
int main(){
    long long num1,num2,temp;
    long long orig1,orig2;
    printf("请入俩个数\n");
    scanf("%lld %lld",&num1,&num2);
    orig1=num1;
    orig2=num2;
    while(num2 != 0){
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    printf("%lld和%lld的最大公约数为%lld\n",orig1,orig2,num1);
    return 0;
}
