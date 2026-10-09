#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("输入一串数字，-1是结束\n");
    int n=1;
    int *p=malloc(n*sizeof*p);
    if(p==NULL){
        return 1;
    }
    int len=0;
    int x=0;
    while(1){
        scanf("%d",&x);
        if(x==-1)break;
        if(len>=n){
            n=n*2;
            int *temp=realloc(p,n*sizeof*p);
            if(temp != NULL){
                p=temp;
            }else{
                free(p);
                return 1;
            }
        }
        p[len]=x;
        len++;
    }
    for(int *l=p+len-1;p<=l;l--){
        printf("%d ",*l);
    }
    free(p);
    p=NULL;
    printf("\n");
    return 0;
}
