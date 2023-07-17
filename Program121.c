/*
Problem 3:
Write a function that takes an array of integers as input and returns true if the array is sorted in non-decreasing order (i.e., each element is less than or equal to the next element), and false otherwise.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckArray(int Arr[],int iSize){
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]<=Arr[iCnt+1]){
            return true;
        }else{
            return false;
        }
    }

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

    bRet=CheckArray(Arr,iSize);

    if(bRet==true){
        printf("the array is in non-decreasing array\n");
    }else{
        printf("the array is not non decreasing array\n");
    }
    
    return 0;
}