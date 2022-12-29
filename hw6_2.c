#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo<100)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("please enter number:");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if(bRet==1)
    {
        printf("greater");
    }
    else
    {
        printf("smaller");
    }

    return 0;
}