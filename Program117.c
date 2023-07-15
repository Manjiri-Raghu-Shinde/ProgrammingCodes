/*
Problem 5:
Write a function that takes an array of integers as input and returns the index of the first occurrence of a given target value. If the target value is not found in the array, the function should return -1.
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int Arr[],int iSize,int iValue){
    int iCnt=0;
    int iPos=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==iValue){
            iPos=iCnt;
            break;
        }
    }

    if(iPos!=0){
        return iPos;
    }else{
        return -1;
    }
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0,iValue=0,iRet=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter the elements of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("enter the target value whose occurence you want to find:\n");
    scanf("%d",&iValue);

    iRet=FirstOccurence(Arr,iSize,iValue);

    printf("the first occurence of the target value is:%d\n",iRet);

    return 0;
}