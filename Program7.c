#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Multiplication
//  Description :       To multiply two numbers
//  Input :             Integer
//  Output :            Integer
//  Author :            Manjiri Shinde
//  Date :              1/7/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int MUltiplication(int iNo1,int iNo2){
    int iAns=0;
    iAns=iNo1*iNo2;
    return iAns;
}
int main(){
    int iValue1=0,iValue2=0;
    int iAns=0;

    printf("enter number 1:\n");
    scanf("%d",&iValue1);

    printf("enter number 2:\n");
    scanf("%d",&iValue2);

    iAns=MUltiplication(iValue1,iValue2);

    printf("multiplication is : %d\n",iAns);
    return 0;
}