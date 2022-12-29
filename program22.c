#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for( iCnt = 1;iCnt<=iValue;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iNo = 0;
    printf("enter the counter value:\n");
    scanf("%d",&iNo);
    printf("the numbers are:\n");
    Display(iNo);
    return 0 ;
}