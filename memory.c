#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5];//static memory allocation
    int *p = NULL;
    p = (int *)malloc(sizeof(int) * 5);
    //use the memory
    free(p);
    //code

    return 0;//memory of arr gets deallocated at this point
}