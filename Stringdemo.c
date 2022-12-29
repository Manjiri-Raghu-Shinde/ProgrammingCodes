#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[6]="hello";
    char *ptr=Arr;
    int iCnt=0;
    while(*ptr!='\0')
    {
        iCnt++;
        ptr++;
    }

    printf("length of string is :%d\n",iCnt);


    return 0;
}