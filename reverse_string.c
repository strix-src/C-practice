#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("任意输入，回车为结束\n");
    int n=1;
    char *p=malloc(n*sizeof*p);
    if(p==NULL){
        return 1;
    }
    int len=0;
    int x=0;
    while((x=getchar())!=EOF && x!='\n'){
        if(len>=n){
            n=n*2;
            char *temp=realloc(p,n*sizeof*p);
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
    p[len]='\0';
    char *f=p;
    char *g=p+len-1;
    while(f<g){
        char temp=*g;
        *g=*f;
        *f=temp;
        g--;
        f++;
    }
    for(int i=0;i<len;i++){
        putchar(p[i]);
    }
    free(p);
    p=NULL;
    printf("\n");
    return 0;
}
