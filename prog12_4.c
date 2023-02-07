
#include<stdio.h>
#include<stdbool.h>
int CountFour(int iNo)
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
        if(iDigit==4)
        {
            iCnt++;
        }
        iNo=iNo/10;
         
    }
    return iCnt;
   
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    printf("frequency of 4 is :%d",iRet);
   
    return 0;
}
