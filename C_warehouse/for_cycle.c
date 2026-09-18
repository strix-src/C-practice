#include <stdio.h>
int main(void)
{
    int x;
    int fact=1;
    int n;
    scanf("%d",&n);
    x=n;
    for (;n>1;n--){
        fact *= n;
    }
    printf("%d!=%d\n",x,fact);
    return 0;
}
