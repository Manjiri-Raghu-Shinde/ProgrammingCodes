#include<stdio.h>

void Fibonnic(int iNo){
    int iValue1=0;
    int iValue2=1;
    int iCnt=0;
    int iSum=0;

    printf("the fibonnic series is:\n");
    printf("%d\t%d\t",iValue1,iValue2);

    for(iCnt=0;iCnt<(iNo-2);iCnt++){
        iSum=iValue1+iValue2;
        iValue1=iValue2;
        iValue2=iSum;
        printf("%d\t",iSum);
    }
}

int main(){
    int iValue=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    Fibonnic(iValue);
    
    return 0;
}