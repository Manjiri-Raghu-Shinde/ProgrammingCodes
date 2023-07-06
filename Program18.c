#include<stdio.h>

int SumNonFactors(int iNo){
    int iCnt=0;
    int iSum=0;


    for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iNo%iCnt)!=0){
            iSum=iSum+iCnt;
        }
    }

    return iSum;
}

int main(){

    int iValue=0,iRet=0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=SumNonFactors(iValue);

    printf("the summation of non factors is:%d\n",iRet);

    return 0;
}