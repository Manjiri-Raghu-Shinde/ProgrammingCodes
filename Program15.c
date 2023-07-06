#include<stdio.h>

int SumFactors(int iNo){
   int iCnt=0,iSum=0;

   for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iNo%iCnt)==0){
            iSum=iSum+iCnt;
        }
   } 

   return iSum;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);

    printf("the summation of factors is:%d\n",iRet);
    return 0;
}