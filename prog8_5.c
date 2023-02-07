#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
    int iNo1=0;
    for(iCnt=10;iCnt>0;iCnt--)
    {
        iNo1=iNo*iCnt;
        printf("%d\t",iNo1);
    }
}
int main()
{
    int iValue=0;

    printf("enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}