#include <stdio.h>
int main()
{
   int a , b;
   scanf("%d %d",&a,&b);
   int max=b;
   if(a>b)
   {
       max=b;
   }
   printf("更大的是%d\n",max);
   return 0;
}

