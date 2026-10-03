#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    printf("你一共输入了%d个参数\n",argc);

    for(int i=argc-1;i>=1;i--){
        int len=strlen(argv[i]);
        for(int j=len-1;j>=0;j--){
            printf("%c",argv[i][j]);
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
