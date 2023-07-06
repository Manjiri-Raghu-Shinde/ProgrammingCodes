#include<stdio.h>

void PatternDisplay(int iNo){
    int iCnt=0;
    char A='A';

    for(iCnt=1;iCnt<=iNo;iCnt++){

            printf("%c\t",A);
            A++;
        
    }

    
}

int main(){
    int iValue=0;

    printf("enter the number of times you want to print:\n");
    scanf("%d",&iValue);

    PatternDisplay(iValue);

    return 0;
}