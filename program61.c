#include<stdio.h>

int MaxDigit(int iNo)
{
    int iMax=0;
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        if(iMax==9)
        {
            break;
        }
        iNo=iNo/10;
    }
    return iMax;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue);

    iRet=MaxDigit(iValue);

    printf("largest digit is:%d\n",iRet);

    return 0;
}