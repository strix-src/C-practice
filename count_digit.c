#include <stdio.h>
int main(void)
{
    int n=0,x;
    scanf("%d",&x);
    while(x>0){
        n++;
        x/=10;
    }
    printf("这个数字的位数是%d\n",n);
    return 0;
}
    
    
