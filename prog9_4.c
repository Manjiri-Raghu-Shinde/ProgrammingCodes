#include<stdio.h>
int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            iFact=iFact*iCnt;
           
        }
    }

   return iFact;
    
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    
    iRet=OddFactorial(iValue);
    printf("Odd Factorial of a number is :%d\n",iRet);

}