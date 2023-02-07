#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibility(int iValue)
{
    int iCnt=0;
    if(iValue%5==0)
    {
        iCnt++;
    }
    if(iCnt==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    bool bRet=false;
    int iNo=0;
    printf("enter number : \n");
    scanf("%d",&iNo);
    bRet=CheckDivisibility(iNo);
    if(bRet==true)
    {
        printf("%d is divisible by 5\n",iNo);
    }
    else
    {
        printf("%d is not divisible by 5\n",iNo);
    }
    return 0;
}