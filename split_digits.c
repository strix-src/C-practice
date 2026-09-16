#include <stdio.h>
int main (void){
    int mask=1;
    int t,m,x;
    printf("请输入一个数\n");
    scanf("%d",&x);
    for(t=x;t>9;mask*=10){
        t/=10;
    }
    do{
        m=x%mask;
        x/=mask;
        mask/=10;
        printf("%d",x);
        x=m;
        if(mask>0){
            printf(" ");
        }
    }while(mask>0);
    printf("\n");
    return 0;
}
