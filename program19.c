#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt<=iNo)
    {
        printf("Jay Ganesh\n");
        iCnt++;
    }
}
int main()
{
    int iNelements = 0;
    printf("enter number of iterations:\n");
    scanf("%d",&iNelements);

    Display(iNelements);
    return 0;
}