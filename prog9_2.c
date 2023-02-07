#include<stdio.h>


int DollarToINR(int iNo)
{
    int iINR=0;
    iINR=iNo*70;
    return iINR;
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number in usd : ");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("value in INR is: %d\n",iRet);
    return 0;
}