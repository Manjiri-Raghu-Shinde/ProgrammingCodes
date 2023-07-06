#include<stdio.h>

void NonFactors(int iNo){
    int iCnt=0;

    printf("the non factors are:\n");
    for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iNo%iCnt)!=0){
            printf("%d\n",iCnt);
        }
    }
}

int main(){

    int iValue=0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    NonFactors(iValue);

    return 0;
}