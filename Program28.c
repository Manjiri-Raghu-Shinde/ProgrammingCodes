#include<stdio.h>

void CountEvenOddDisplay(int iNo){

    int iDigit=0;
    int iEvenCnt=0,iOddCnt=0;

    while(iNo!=0){
        iDigit=iNo%10;

        if(iDigit%2==0){
            iEvenCnt++;
        }
        else{
            iOddCnt++;
        }

        iNo=iNo/10;
    }

    printf("the count even numbers is:%d\n",iEvenCnt);
    printf("the count of odd numbers is:%d\n",iOddCnt);

}


int main(){
    int iValue=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    CountEvenOddDisplay(iValue);

    return 0;
}