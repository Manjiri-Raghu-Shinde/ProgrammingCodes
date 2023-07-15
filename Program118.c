/*
Problem 4:
Write a function that takes an array of integers as input and returns the product of all the elements in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int Multiplication(int Arr[],int iSize){
    int iCnt=0;
    int iMult=1;
    for(iCnt=0;iCnt<iSize;iCnt++){
       iMult=iMult*Arr[iCnt];
    }

    return iMult;
    
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0,iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter the elements of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=Multiplication(Arr,iSize);

    printf("the first occurence of the target value is:%d\n",iRet);

    return 0;
}