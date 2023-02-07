#include<stdio.h>

void DisplayPattern(int iValue)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    int iNo=0;
    printf("enter desired number : \n");
    scanf("%d",&iNo);
    DisplayPattern(iNo);
    return 0;
}