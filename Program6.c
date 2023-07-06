#include<stdio.h>

int main(){
    int iValue1=0,iValue2=0;
    int iAns=0;

    printf("enter number 1:\n");
    scanf("%d",&iValue1);

    printf("enter number 2:\n");
    scanf("%d",&iValue2);

    iAns=iValue1*iValue2;

    printf("multiplication is : %d\n",iAns);
    return 0;
}