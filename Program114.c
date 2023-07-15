/*
Problem 3:
Write a function that takes an array of integers as input and returns the average of all the elements in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int AverageOfElements(int Arr[],int iSize){
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
    }

    return (iSum/iSize);
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0,iRet=0;

    printf("enter the size of array: ");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("\nenter elements of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=AverageOfElements(Arr,iSize);

    printf("the average of elements is:%d\n",iRet);
    
    return 0;
}