#include<stdio.h>

struct demo
{
    int no;
    float f;
    double d;


};

union demo1
{
    int no;
    float f;
    double d;

};

int main()
{
    struct demo dobj;
    union demo1 uobj;

    printf("%d\n",sizeof(dobj));
     printf("%d\n",sizeof(uobj));




    return 0;
}