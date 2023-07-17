/*
Problem 2:
Write a function that takes an array of integers as input and returns the second smallest element in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int SecondSmallestElement(int Arr[],int iSize){
    int iCnt=0;
    int iMax=Arr[0],iCount=2;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]<iMax && iCount!=0){
            iMax=Arr[iCnt];
            iCount--;
        }
        
    }

    return iMax;
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0;
    int iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter the elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=SecondSmallestElement(Arr,iSize);

    printf("the second smallest element is:%d\n",iRet);


    return 0;
}