//application of perfect number.
//sum of factors = input number
//common way of writing code
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iData)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 1;iCnt < iData;iCnt++)
    {
        if(iData % iCnt == 0)
        {
            iSum = iSum + iCnt;
            
        }
    }
    
    if(iSum == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   
    int iValue = 0;
    bool bRet = false;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    

    return 0;
}