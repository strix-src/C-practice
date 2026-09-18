#include <stdio.h>
int main(void){
    int n,t;
    int a=1;
    int b=2;
    double sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    sum+=1.0*a/b;
    t=b;
    b=a+b;
    a=t;
    }
    printf("%.9f\n",sum);
    return 0;
}


