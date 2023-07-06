#include<stdio.h>

int MinDigit(int iNo){
    int iDigit=0,iMin=9;

    while(iNo!=0){
        iDigit=iNo%10;
        
        if(iDigit<iMin){
            iMin=iDigit;
        }

        iNo=iNo/10;
    }

    return iMin;
}
int main(){
    int iValue=0,iRet=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=MinDigit(iValue);

    printf("the min digit is : %d\n",iRet);

    return 0;
}