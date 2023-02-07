#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>0;iCnt--)
    {
    printf("%d\t",iCnt);
    printf("#\t");
    }
}
int main()
{
    int iValue=0;
    printf("enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}