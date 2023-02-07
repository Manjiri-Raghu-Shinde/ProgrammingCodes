#include<stdio.h>

int MultFact(int iNo)
{
    int iMult=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMult=iMult*iCnt;
            
        }
    }
    printf("%d",iMult);
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the number ");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("\nMultiplication of factors is :%d",iRet);
    return 0;
}