#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
    int iValue=0,iValue1=0;
    BOOL bRet=FALSE;
    printf("please enter two number:");
    scanf("%d",&iValue,&iValue1);
    bRet=ChkGreater(iValue,iValue1);
    if(bRet==1)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }

    return 0;
}