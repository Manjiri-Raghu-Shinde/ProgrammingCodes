/*
Problem 2:
Write a function that takes an array of integers as input and returns true if the array contains any duplicate elements, and false otherwise.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckDuplicates(int Arr[],int iSize){
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        for(int j = iCnt + 1; j < iSize; j++){
            if(Arr[iCnt] == Arr[j]){
                return true;
            }
        }
    }

    return false;

}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0;
    bool bRet=false;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter the array elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    bRet=CheckDuplicates(Arr,iSize);

    if(bRet==true){
        printf("the duplicates are present\n");
    }else{
        printf("the duplicates are not present\n");
    }
    
    return 0;
}