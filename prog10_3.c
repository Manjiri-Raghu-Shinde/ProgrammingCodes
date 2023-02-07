#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter=0;
    iMeter=1000*iNo;
    return iMeter;

}
int main()
{
    int iValue=0,iRet=0;
    printf("enter distance:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("The converted value is:%d\n",iRet);

    return 0;

}