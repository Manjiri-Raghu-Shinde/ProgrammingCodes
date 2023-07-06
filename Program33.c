#include<stdio.h>
int main(){

    int iCnt=0;
    int Arr[5];

    printf("enter 5 elements in array of size 5:\n");
    for(iCnt=0;iCnt<5;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("the elements in array are:\n");

    for(iCnt=0;iCnt<5;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}