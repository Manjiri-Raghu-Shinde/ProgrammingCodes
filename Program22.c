#include<stdio.h>

void DisplayEvenFactors(int iNo){

    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iNo%iCnt)==0){
                if(iCnt%2==0){
                    printf("%d\n",iCnt);
                } 
        }
    }
}
int main(){

    int iValue=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}