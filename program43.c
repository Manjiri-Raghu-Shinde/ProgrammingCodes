#include<stdio.h>

void DisplayOddFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt =1;iCnt<=(iNo/2);iCnt=iCnt+2)
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
    DisplayOddFactors(iValue);
    return 0;
}