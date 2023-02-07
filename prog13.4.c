
#include<stdio.h>
#include<stdbool.h>
int CountEven(int iNo)
{
    int iDigit = 0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iMult=iMult*iDigit;
        iNo=iNo/10;
         
    }
    return iMult;
   
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("frequency of even number is :%d",iRet);
   
    return 0;
}
