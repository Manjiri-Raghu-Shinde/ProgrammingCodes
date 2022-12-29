#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
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
}
bool Palindrome(int iData)
{
    int iReverse=0;
    iReverse=Reverse(iData);
    return(iReverse==iData);
}

int main()
{
    int iValue=0;
    bool bRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);

    bRet=Palindrome(iValue);

    if(bRet==true)
    {
        printf("%d is a palindrome \n",iValue);
    }
    else{
        printf("%d is not a palindrome \n",iValue);
    }
    
    return 0;

}