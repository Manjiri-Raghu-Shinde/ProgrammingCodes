/*
Problem 1:
Write a function that takes an array of integers as input and returns the count of positive numbers in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int CountPositiveElement(int Arr[],int iSize){
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]>0){
            iCount++;
        }
    }

    return iCount;
}


int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0,iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter the array elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=CountPositiveElement(Arr,iSize);

    printf("the count of positive elements is:%d\n",iRet);
    
    return 0;
}