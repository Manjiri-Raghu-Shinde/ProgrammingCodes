#include<stdio.h>

int CountDigits(int iNo){
    int iDigit=iNo;
    int iCount=0;

    while(iNo!=0){
        iDigit=iNo%10;
        iCount++;
        iNo=iNo/10;
    }

    return iCount;
}
int main(){

    int iValue=0;
    int iRet=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("the count of digits is:%d\n",iRet);

    return 0;

}