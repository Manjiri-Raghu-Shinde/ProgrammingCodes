//application of perfect number.
//sum of factors = input number;
//unique way of wrting the code
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <=(iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
            
        }
    }
     if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

    return iSum;        
}

int main()
{
   
    int iValue = 0;
    bool bRet = false;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue); //function call

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