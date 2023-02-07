#include<stdio.h>

int DifferenceOfFactors(int iNo)
{
    int iCnt = 0;
    int iFSum=0,iNSum=0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iNSum=iNSum+iCnt;
        }
    }

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFSum=iFSum+iCnt;
        }
    }


    return iFSum-iNSum;
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    
    iRet=DifferenceOfFactors(iValue);
    printf("Summation of the non factors are:%d\n",iRet);

}