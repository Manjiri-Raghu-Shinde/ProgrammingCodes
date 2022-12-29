#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh\n");
    }
}

int main()
{
    int iNelements = 0;
    printf("enter number of times you want to print Jay Ganesh\n");
    scanf("%d",&iNelements);

    Display(iNelements);

    return 0;
}