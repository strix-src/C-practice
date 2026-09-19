#include <stdio.h>
int main(void){
    printf("请输入一个不完全相同的四位数\n");
    int num;
    scanf("%d",&num);
    int cnt=0;
    for (;num!=6174;cnt++){
        int a=num/1000;
        int b=num/100%10;
        int c=num/10%10;
        int d=num%10;
        int t;
        if(a<b){t=b;b=a;a=t;}
        if(a<c){t=c;c=a;a=t;}
        if(a<d){t=d;d=a;a=t;}
        if(b<c){t=c;c=b;b=t;}
        if(b<d){t=d;d=b;b=t;}
        if(c<d){t=d;d=c;c=t;}
        int digit1=a*1000+b*100+c*10+d;
        int digit2=d*1000+c*100+b*10+a;

        num=digit1-digit2;
        printf("%d=%d-%d\n",num,digit1,digit2);
    }
    printf("恭喜你掉进黑洞，一共重复了%d次\n",cnt);
    return 0;
}
