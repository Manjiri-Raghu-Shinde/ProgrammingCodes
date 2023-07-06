#include<stdio.h>

int CountEvenDigits(int iNo){
    int iDigit=0;
    int iCount=0;

    while(iNo!=0){
        iDigit=iNo%10;

        if(iDigit%2==0){
            iCount++;
        }
        
        iNo=iNo/10;
    }

    return iCount;
}
int main(){

    int iValue=0;
    int iRet=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=CountEvenDigits(iValue);

    printf("the count of digits is:%d\n",iRet);

    return 0;

}