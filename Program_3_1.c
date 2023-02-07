#include<stdio.h>

void PrintEven(int iValue)
{
    int iCnt=0,iCnt1=0;
    if(iValue<=0)
    {
        return;
    }

    while(iCnt1!=iValue)
    {
        iCnt+=2;
        printf("%d\n",iCnt);
        iCnt1++;
        
    }
}
int main()
{
    int iNo=0;
    printf("enter number : \n");
    scanf("%d",&iNo);
    PrintEven(iNo);
    return 0;

}