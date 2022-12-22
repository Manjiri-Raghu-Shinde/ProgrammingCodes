#include<stdio.h>

int main(){

    char ch='a';
    int i=10;
    float f=8.7;
    double d=4.5677;

    char *cp=&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;


    void *vp=&ch;

    printf("address of cp : %p\n",&ch);
    printf("data refer by cp pointer: %c\n",*cp);
    printf("value of ch :%c\n",ch);
    printf("value of pointer: %p\n",cp);
    printf("size of cp pointer: %d\n",sizeof(cp));
    printf("size of ch variable : %d\n",sizeof(ch));

    printf("data refer by vp: %c\n",*(char *)vp);
    





    return 0;
}
