#include<stdio.h>
//O(N)
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("the factors of %d are :\n",iNo);
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
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

    DisplayFactors(iValue);

    return 0;
}