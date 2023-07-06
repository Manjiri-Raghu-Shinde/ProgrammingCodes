#include<stdio.h>

void ReverseTableDisplay(int iNo){

    int iCnt=0;

    printf("---------------------------------------------------------\n");
    for(iCnt=10;iCnt>=1;iCnt--){
        printf("%d * %d = %d\n",iNo,iCnt,(iNo*iCnt));
    }
    printf("---------------------------------------------------------\n");

}

int main(){
    int iValue=0;

    printf("enter the number whose table you want display:\n");
    scanf("%d",&iValue);

    ReverseTableDisplay(iValue);

    return 0;
}