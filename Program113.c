/*
Problem 2:
Write a function that takes an array of integers as input and returns the maximum element in the array.
*/
#include<stdio.h>
#include<stdlib.h>

int MaximumElement(int Arr[],int iSize){
    int iCnt=0,iMax=Arr[0];

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>iMax){
        iMax=Arr[iCnt];
       }
       
    }

    return iMax;
    
}

int main(){
    int *Arr=NULL;
    int iCnt=0,iSize=0,iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    printf("enter elements:\n");

    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=MaximumElement(Arr,iSize);

    printf("the maximum element is:%d\n",iRet);

    return 0;
}