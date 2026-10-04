#include <stdio.h>

struct student{
    char name[20];
    float score;
};

int main(void){
    struct student stu[3];
    for(int i=0;i<=2;i++){
        printf("请依次输入学生的名字，成绩\n");
        scanf("%19s %f",stu[i].name,&stu[i].score);
    }
    int max=0;
    for(int i=1;i<3;i++){
        if(stu[max].score<stu[i].score){
            max=i;
        }
    }
    printf("成绩最好的是%s,%f\n",stu[max].name,stu[max].score);
    return 0;
}
