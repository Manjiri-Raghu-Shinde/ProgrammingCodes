//input 4
//1     2       3       4
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("enter the value:\n");
    scanf("%d",&iValue);

    printf("the pattern is:\n");
    Display(iValue);
    return 0;
}