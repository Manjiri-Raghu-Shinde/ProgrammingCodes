// add two numbers entered by user

int Addition(int iNo1,int iNo2){
    int iRet=0;
    iRet=iNo1+iNo2;
    return iRet;
}
#include<stdio.h>
int main(){

    int iValue1=0,iValue2=0;
    int iAns=0;
    printf("enter number one:\n");
    scanf("%d",&iValue1);
    printf("enter number two:\n");
    scanf("%d",&iValue2);

    iAns=Addition(iValue1,iValue2);
    printf("the addition of two numbers is: %d\n",iAns);
    return 0;
}