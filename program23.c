#include<stdio.h>

void Display(int iElements)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt<=iElements)
    {
        printf("Mavellous:%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    int iNo = 0;
    printf("enter no of iterations:\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0 ;
}