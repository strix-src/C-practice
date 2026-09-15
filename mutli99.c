#include <stdio.h>
int main(void){
    int i,c,x;
    for(c=1;c<=9;c++){
        int cnt=0;
        for(i=1;i<=c;i++){
            x=i*c;
            printf("%d*%d=%d ",i,c,x);
            cnt ++;
            if(cnt == c){
                printf("\n");
            }
        }
    }
    return 0;
}
