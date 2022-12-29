#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt ++)
    {
        if(iNo % iCnt != 0)
        {
           iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
   
    iRet = DisplayNonFactors(iValue);
     printf("the Summation of non factors is %d\n",iRet);
    return 0;
}