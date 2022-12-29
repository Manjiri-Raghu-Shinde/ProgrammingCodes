#include<stdio.h>

int Summation()
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt<=5;iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    
    iValue = Summation();
    printf("the summation is :%d\n",iValue);
    
    return 0;
}