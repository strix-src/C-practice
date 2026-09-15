#include <stdio.h>
int main(void){
    long long n;
    double x=0;
    double sum=0;
    printf("请输入一个数\n");
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        x=1.00/i;
        sum+=x;
    }
    printf("最后的结果是%lf\n",sum);
    return 0;
}
    

