#include "marvellous.h"

int main()
{
    struct Demo obj;
    
    int no = 11;
    float radius = 30.6f;
    float area = PI*radius*radius;

    IPTR ptr = &no;

    printf("Area is:%f\n",area);

    printf("value of no is %d\n",*ptr);
    return 0;
}

//gcc HeaderDemo.c --save-temps -o  - to save all related files of toolchain