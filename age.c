// A year approximately consists of 3.156 × 107 seconds. Write a C program that accepts your
// age in years and convert it into equivalent number of seconds

int AgeConversion(int iAge){
    int iRet=0;
    iRet=iAge*3.156E7;
    return iRet;
}
#include<stdio.h>
int main(){
    int iAge=0,iAns=0;
    printf("enter age:\n");
    scanf("%d",&iAge);

    iAns=AgeConversion(iAge);
    printf("the converted age is:%d\n",iAns);
    return 0;
}