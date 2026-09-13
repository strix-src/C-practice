#include <stdio.h>
int main()
{
    int x;
    int y=0;
    int z;
    scanf("%d",&x);
    while(x>0){
        z=x%10;
        x/=10;
        y=z+y*10;
    }
    printf("%d\n",y);
    return 0;
}
