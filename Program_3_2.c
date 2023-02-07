#include<stdio.h>

void EvenFactors(int iValue)
{
    int iCnt=0;
    for(iCnt=0;iCnt<(iValue/2);iCnt++)
    {
        if((iValue%iCnt)==0  && iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iNo=0;
    printf("enter numbers : \n");
    scanf("%d",&iNo);
    EvenFactors(iNo);
    return 0;
}