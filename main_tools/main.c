#include <stdio.h>
#include <stdlib.h>
#include "prime_sieve.h"
#define W 101
#define H 101
char grid[W][H];

int main(void){
    int num=1;
    int x=W/2;
    int y=H/2;
    int step=1;
    int dir=0;
    prime_sieve(W*H);
    for(int j=0;j<H;j++){
        for(int i=0;i<W;i++){
            grid[i][j]=' ';
        }
    }
    while(num<W*H){
        for(int i=1;i<=2;i++){
            for(int j=1;j<=step;j++){
                num++;
                if(dir==0)x++;
                else if(dir==1)y--;
                else if(dir==2)x--;
                else if(dir==3)y++;
                if(x>=0&&x<W&&y>=0&&y<H){
                    if(isprime[num]==0)grid[x][y]='*';
                }
            }
            dir=(dir+1)%4;
        }
        step++; 
    }
    for(int j=0;j<H;j++){
        for(int i=0;i<W;i++){
            printf("%c",grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
