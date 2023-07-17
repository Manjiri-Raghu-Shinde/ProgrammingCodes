/*

Problem 5:
Write a function that takes an array of integers as input and returns the sum of all the even-indexed elements in the array.*/

#include<stdio.h>
#include<stdlib.h>

int SumofEvenIndexedElements(int Arr[],int iSize){
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(iCnt%2==0){
            iSum=iSum+Arr[iCnt];
        }
    }

    return iSum;
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0,iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter the elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=SumofEvenIndexedElements(Arr,iSize);

    printf("the sum of all even indexed elements :%d\n",iRet);
    
    return 0;
}