#include<stdio.h>

void FactRev(int iValue)
{
    int iCnt=0;
    for(iCnt=iValue/2;iCnt>0;iCnt--)
    {
        if((iValue%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iNo=0;
    printf("enter number : \n");
    scanf("%d",&iNo);
    FactRev(iNo);
    return 0;
}