#include<stdio.h>

int Summation(int Arr[]){
    int iSum=0,iCnt=0;

    for(iCnt=0;iCnt<5;iCnt++){
        iSum=iSum+Arr[iCnt];
    }

    return iSum;
}

int main(){

    int iCnt=0,iRet=0;
    int Arr[5];

    printf("enter 5 elements in array of size 5:\n");
    for(iCnt=0;iCnt<5;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=Summation(Arr);

    printf("the sum of elements is : %d\n",iRet);

    // printf("the elements in array are:\n");

    // for(iCnt=0;iCnt<5;iCnt++){
    //     printf("%d\n",Arr[iCnt]);
    // }

    return 0;
}