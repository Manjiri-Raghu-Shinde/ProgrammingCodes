#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize){
    int iCnt=0;

    for(iCnt=iSize-1;iCnt>=0;iCnt--){
        printf("%d\n",Arr[iCnt]);
    }
}

int main(){

    int iCnt=0,iLength=0;
    int *Arr=NULL;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(iLength*sizeof(int));

    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    DisplayReverse(Arr,iLength);

    return 0;
}