#include<stdio.h>
int Average(int iNo1,int iNo2,int iNo3)
{
    int iret=0;
    iret=(iNo1+iNo2+iNo3)/3;
    return iret;
}
int main(){
    int iValue1=0,iValue2=0,iValue3=0;
    int iResult=0;
    printf("enter three numbers:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iResult=Average(iValue1,iValue2,iValue3);
    printf("the average of three numbers is:%d\n",iResult);
    return 0;
}