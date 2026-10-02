#include <stdio.h>
void my_strlen(char *a);
void my_strcpy(char *dest,char *src);
void my_strcat(char *a,char *b);
void my_strcmp(char *a,char *b);

int main(void){
    char str[1000]="hello world";
    my_strlen(str);
    char h[1000]="lakjdasklfjkfajds";
    my_strcat(h,str);
    my_strcpy(h,str);
    my_strcmp(h,str);
}

void my_strlen(char *a){
    int i=0;
    while(a[i] != '\0'){
        i++;
    }
    printf("这个字符串的数量为%d\n",i);
}

void my_strcpy(char *dest,char *src){
    int i=0;
    for(;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';
    printf("复制结果是%s\n",dest);
}

void my_strcat(char *a,char *b){
    int i=0,j=0;
    while(a[i]!='\0')i++;
    while(b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++; 
    }
    a[i]='\0';
    printf("%s\n",a);
}

void my_strcmp(char *a,char *b){
    int i=0;
    while(a[i]!='\0'&&a[i]==b[i]){
        i++;
    }
    if(a[i]==b[i]){
        printf("俩个字符串完全相同\n");
    }else{
        printf("俩个字符串不完全相同\n");
    }
}
