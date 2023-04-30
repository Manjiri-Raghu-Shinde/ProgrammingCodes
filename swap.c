#include<stdio.h>
int main(){
    int iValue1=0,iValue2=0;
    int iTemp=0;
    printf("enter two numbers:\n");
    scanf("%d %d",&iValue1,&iValue2);
    iTemp=iValue1;
    iValue1=iValue2;
    iValue2=iTemp;
    printf("the swapped numbers are: %d %d\n ",iValue1,iValue2);
    return 0;
}