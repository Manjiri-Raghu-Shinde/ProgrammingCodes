/*
Problem 4:
Write a function that takes an array of integers as input and returns the index of the smallest positive element in the array. If there are no positive elements, the function should return -1.
*/

#include<stdio.h>
#include<stdlib.h>

int IndexOfSmallestPositiveElement(int Arr[],int iSize){
    int iCnt=0,iMin=Arr[0];
    int iCount=0;

    if(iSize==0){
        return -2;
    }

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]<iMin){
            iMin=Arr[iCnt];
            iCount++;
        }   
    }

    return (iCount-1);
}

int main(){

    int *Arr=NULL;
    int iSize=0,iCnt=0,iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter array elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=IndexOfSmallestPositiveElement(Arr,iSize);

    printf("the index of smallest positive element is:%d\n",iRet);


    return 0;
}