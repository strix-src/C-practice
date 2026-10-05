#include <stdio.h>
#define W 60
#define H 16

typedef struct{
    int x;
    int y;
}point;

point snake[100];
int len=3;
int main(void){
    snake[0].x=30;snake[0].y=9;
    snake[1].x=30;snake[1].y=8;
    snake[2].x=31;snake[2].y=8;

    for(int y=0;y<H;y++){
        for (int x=0;x<W;x++){
            if(x==0||y==0||y==H-1||x==W-1){
                printf("#");
            }else{
                int is_snake=0;
                for(int i=0;i<len;i++){
                    if(snake[i].x==x&&snake[i].y==y){
                        is_snake=1;
                        break;
                    }
                }
                if(is_snake){
                    printf("O");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
