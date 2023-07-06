#include<stdio.h>

int Summation(int iNo){
    int iSum=0;
    int iCnt=0;

    for(iCnt=0;iCnt<=iNo;iCnt++){
        iSum=iSum+iCnt;
    }

    return iSum;
}
int main(){
    int iValue=0,iRet=0;

    printf("enter the number till you want the sum:\n");
    scanf("%d",&iValue);

    iRet=Summation(iValue);
    printf("the addition is : %d\n",iRet);

    return 0;
}