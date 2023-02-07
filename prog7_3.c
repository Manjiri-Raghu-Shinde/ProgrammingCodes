#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}