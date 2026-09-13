#include <stdio.h> 
int main(void)
{
    int count=0;
    int total=0;
    int num;
    printf("请输入数字，当输入-1将结束输入\n");
    scanf("%d",&num);
    while(num != -1){
        count++;
        total+=num;
        scanf("%d",&num);
    }
    if (count == 0){
        printf("你一共输入了0次，最后它们的平均数为0\n");
    }else{
        printf("你一共输入了%d次，最后它们的平均数为%f\n",count,1.0*total/count);}
    return 0;
} 
