#include<stdio.h>

void ReversePatternDisplay(int iNo){
    int iCnt=0;

    for(iCnt=iNo;iCnt>0;iCnt--){
        printf("%d\n",iCnt);
    }
}

int main(){
    int iValue=0;

    printf("enter the number of times you want to print:\n");
    scanf("%d",&iValue);

    ReversePatternDisplay(iValue);

    return 0;
}