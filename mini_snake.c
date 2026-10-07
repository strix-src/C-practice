#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define W 60
#define H 16

void draw();
void cleanup();
void random_food();
void move(char dir);

typedef struct{
    int x;
    int y;
}point;

point snake[100];
point food;
int len=3;
int gameover=0;

int main(void){
    atexit(cleanup);
    srand(time(NULL));
    snake[0].x=29;snake[0].y=8;
    snake[1].x=30;snake[1].y=8;
    snake[2].x=31;snake[2].y=8;
    random_food();
    system("stty raw");
    while(1){
        draw();
        char dir;
        read(STDIN_FILENO,&dir,1);
        if(dir=='q'||dir==3)break;
        move(dir);
        if(snake[0].x==W-1||snake[0].y==H-1||snake[0].x==0||snake[0].y==0){
            gameover=1;
        }
        for(int i=1;i<len;i++){
            if(snake[0].x==snake[i].x&&snake[0].y==snake[i].y){
                gameover=1;
            }
        }
        if(gameover)break;
        if(snake[0].x==food.x&&snake[0].y==food.y){
            if(len<100)len++;
            random_food();
        }
    }
    if(gameover)printf("Game Over\n");
    return 0;
}

void draw(){
    system("clear");
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
                }else if(x==food.x&&y==food.y) {
                    printf("*");
                }else {
                    printf(" ");
                }
            }
        }
        printf("\r\n");
    }
}

void move(char dir){
    if(dir!='h'&&dir!='j'&&dir!='k'&&dir!='l')return;
    for(int i=len-1;i>0;i--){
        snake[i]=snake[i-1];
    }
    if(dir=='h')snake[0].x--;
    if(dir=='j')snake[0].y++;
    if(dir=='k')snake[0].y--;
    if(dir=='l')snake[0].x++;
}

void random_food(){
    int on_snake=0;
    do{
        food.x=rand()%(W-2)+1;
        food.y=rand()%(H-2)+1;
        for(int i=0;i<len;i++){
            if(snake[i].x==food.x&&snake[i].y==food.y){
                on_snake=1;
                break;
            }
        }
    }while(on_snake);
}

void cleanup(){
    system("stty cooked");
}
