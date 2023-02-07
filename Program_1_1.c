#include<stdio.h>
int Division(int iValue1,int iValue2)
{
    if(iValue2==0)
    {
        printf("cannot be divided by zero\n");
        return -1;

    }
    
    int iAns=0;
    iAns=iValue1/iValue2;
    return iAns;
}
int main()
{
    int iNo1=0,iNo2=0;
    int iRet=0;
    printf("enter first number : \n");
    scanf("%d",&iNo1);
    printf("enter second number : \n");
    scanf("%d",&iNo2);
    iRet=Division(iNo1,iNo2);
    printf("division of two numbers is: %d\n",iRet);
    return 0;
}