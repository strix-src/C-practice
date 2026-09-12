#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(0));
    int target=rand()%100+1;
    int guess_num;
    int count=0;

    printf("请输入一个数字，来猜目标数字\n");
    do {
        scanf("%d",&guess_num);
        count++;
        if(guess_num < target){
            printf("再输入一个大一点的数字试试\n");
        }else if(guess_num > target){
            printf("再输入一个小一点的数字试试\n");
        }
    }while(guess_num != target);
    printf("恭喜你答对了，你一共尝试了%d次\n",count);
    return 0;
}
        
