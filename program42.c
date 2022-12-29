#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt =2;iCnt<=(iNo/2);iCnt=iCnt+2)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    printf("the even factors of %d is \n",iValue);
    DisplayEvenFactors(iValue);
    return 0;
}