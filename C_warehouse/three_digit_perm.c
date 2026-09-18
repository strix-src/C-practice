#include <stdio.h>
int main(void){
    printf("请输入一个小于等于6的数字\n");
    int a,i,j,k;
    scanf("%d",&a);
    i=a;
    int cnt = 0;
        while(i<=a+3){
            j=a;
            while(j<=a+3){
                k=a;
                while(k<=a+3){
                    if(i!=k){
                        if(k!=j){
                            if(i!=j){
                                cnt++;
                                printf("%d%d%d",i,j,k);
                                if(cnt==6){
                                    printf("\n");
                                cnt=0;
                                }else{
                                    printf(" ");
                                }
                            }     
                        }
                    }
                    k++;
                }
                j++;
            }
            i++;
        }
    return 0;
}
