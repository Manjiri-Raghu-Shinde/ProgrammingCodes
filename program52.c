#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt=0;
    int iOddCnt=0;

    if(iNo==0)
    {
        printf("Number of Even Digits:1\n");
        printf("Number of Odd Digits:0");
        return;
    }
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        if((iDigit%2)==0)
        {
        iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
         
    }
    printf("Number of Even Digits:%d\n",iEvenCnt);
    printf("Number of Odd Digits:%d\n",iOddCnt);
}

int main()
{
    int iValue = 0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);
    return 0;
}
