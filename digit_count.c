#include <stdio.h>
int main(void){
    printf("请输入随机的0~9,-1为结束\n");
    int count[10]={0};
    int a;
    scanf("%d",&a);
    if(a!=-1){
        while(a<=9&&a>=0){
            count[a]++;
            scanf("%d",&a);
        }
    }
    for(int i=0;i<=9;i++){
        printf("%d:%d\n",i,count[i]);
    }
    return 0;
}
