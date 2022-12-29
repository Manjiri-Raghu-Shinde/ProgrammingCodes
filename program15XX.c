#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("index no :%d of Jay GAnesh\n",iCnt);
    }
}
int main()
{
    int iNelements  = 0;
    printf("enter number of iterations:\n");
    scanf("%d",&iNelements);
    Display(iNelements);
    return 0;
}