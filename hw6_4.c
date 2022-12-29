#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1||iNo2||iNo3==0)
    {
        return 0;
    }
    return iNo1*iNo2*iNo3;

}
int main()
{
    int iValue=0,iValue1=0,iValue3=0,iRet=0;
    
    printf("please enter three number:");
    scanf("%d",&iValue,&iValue1,&iValue3);
    iRet=Multiply(iValue,iValue1,iValue3);
    printf("the multiplication is:%d",iRet);
    return 0;
}