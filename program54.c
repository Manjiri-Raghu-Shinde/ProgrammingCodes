#include<stdio.h>

int ReverseDigits(int iNo)
{
    int iDigit = 0;
    int iRev=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
         
    }
    return iRev;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet=ReverseDigits(iValue);
    printf("reverse digits are:%d\n",iRet);
    return 0;

    return 0;
}