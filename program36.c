#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    printf("the non factors are displayed below:\n");
    DisplayNonFactors(iValue);
    return 0;
}