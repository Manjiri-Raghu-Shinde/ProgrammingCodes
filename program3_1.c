#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt=0;
    int iCnt1=0;
    if(iNo<=0)
    {
        iNo=-iNo;

    }
    for(iCnt=1;iCnt1<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
            iCnt1++;
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}