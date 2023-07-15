/*
Problem 1:
Given an array of integers, write a function to calculate the sum of all the elements in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize){
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
    }

    return iSum;
}

int main(){

    int *Arr=NULL;
    int iSize=0,iCnt=0,iRet=0;

    printf("enter size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=Summation(Arr,iSize);
    printf("the addition of elements are:%d\n",iRet);

    return 0;
}