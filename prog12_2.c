#include<stdio.h>
#include<stdbool.h>
bool DisplayDigits(int iNo)
{
    int iDigit = 0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            iCnt++;
        }
        iNo=iNo/10;
         
    }
   if(iCnt!=0)
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
    
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

   
    return 0;
}
