#include<stdio.h>

void DisplayFactors(int iNo){
   int iCnt=0;

    printf("the factors are:\n");
   for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iNo%iCnt)==0){
            printf("%d\n",iCnt);
        }
   } 
}
int main(){
    int iValue=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}