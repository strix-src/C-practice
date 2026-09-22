#include <stdio.h>
int main(void){
    long long fib[100];
    fib[0]=1;
    fib[1]=1;
    printf("请输入小于100的数字");
    int n;
    scanf("%d",&n);
    if(n<1||n>=100)return 0;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int a=0;a<=n;a++){
        printf("%lld\n",fib[a]);
    }
    printf("\n");
    return 0;
}

    
        

