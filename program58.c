#include<stdio.h>
#include<stdbool.h>
bool Palindrome(int iNo)
{
    int iDigit = 0;
    int iRev=0;
    int iNo1=0;
    iNo1=iNo;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(;iNo!=0;)//for(;;) is a valid for loop too
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
         
    }
   return(iRev==iNo1);
   
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