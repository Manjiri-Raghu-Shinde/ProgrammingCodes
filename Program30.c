#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo){
    int iDigit=0;
    int iRev=0;
    int iTemp=iNo;

    iDigit=iNo%10;
    iRev=(iRev*10)+iDigit;
    iNo=iNo/10;

    if(iRev==iDigit){
        return true;
    }else 
    {
        return false;
        /* code */
    }
    
}

int main(){
    int iValue=0;
    bool bRet=false;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);

    if(bRet==true){
        printf("number is palindrome\n");
    }else 
    {
        printf("number is not palindrome\n");
        /* code */
    }
    

    return 0;
}