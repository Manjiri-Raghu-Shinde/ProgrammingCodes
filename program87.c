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
        printf("%d\n",iCnt);
    }
   
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
