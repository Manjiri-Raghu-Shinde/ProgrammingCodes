#include<stdio.h>

int CountDigits(int iNo)
{
    
    int iCnt=0;

    if(iNo==0) //filter
    {
        return 1;
    }
    if(iNo<0)
    {
        iNo=-iNo;//updater
    }

    while(iNo > 0)
    {
       
        iNo=iNo/10;
        iCnt++;
    }


    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits are:%d\n",iRet);
    return 0;
}
/*
iNo=751

iDigit=iNo%10        1
iNo=iNo/10           75

iDigit=iNo%10        5
iNo=iNo/10           7

iDigit=iNo%10        7
iNo=iNo/10           0


*/