#include<stdio.h>
#pragma pack(1)


struct demo{
    int no;
    float f;
    char ch;
    float f1;
    char cch1;
    

};
int main()
{
    struct demo dobj;
    printf("%d\n",sizeof(dobj));


    return 0;
}