#include<stdio.h>
//O(N/2
int SumOfFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    
    
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
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
    
    iRet = SumOfFactors(iValue);
    printf("summation of factors:%d\n",iRet);

    return 0;
}