#include<stdio.h>

int SumDigits(int iNo){
    int iDigit=0;
    int iSum=0;

    while(iNo!=0){
        iDigit=iNo%10;

        iSum=iSum+iDigit;
        
        iNo=iNo/10;
    }

    return iSum;
}
int main(){

    int iValue=0;
    int iRet=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=SumDigits(iValue);

    printf("the sum of digits is:%d\n",iRet);

    return 0;

}