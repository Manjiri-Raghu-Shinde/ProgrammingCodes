#include<stdio.h>

void TableDisplay(int iNo){

    int iCnt=0;

    printf("---------------------------------------------------------\n");
    for(iCnt=1;iCnt<=10;iCnt++){
        printf("%d * %d = %d\n",iNo,iCnt,(iNo*iCnt));
    }
    printf("---------------------------------------------------------\n");

}

int main(){
    int iValue=0;

    printf("enter the number whose table you want display:\n");
    scanf("%d",&iValue);

    TableDisplay(iValue);

    return 0;
}