/*
Problem 4:
Write a function that takes an array of integers as input and returns a new array with all the even numbers from the original array.
*/

#include<stdio.h>
#include<stdlib.h>

void EvenElementArray(int Arr[],int iSize){
    int iCnt=0,iCount=0,i=0;
    int *Arr2=NULL;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]%2 == 0){
            iCount++;
        }
    }

    Arr2=(int *)malloc(sizeof(int)*iCount);

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]%2 == 0){
            Arr2[i]=Arr[iCnt];
            i++;
        }
    }

    printf("the new array is:\n");
    for(iCnt=0;iCnt<iCount;iCnt++){
        printf("%d\n",Arr2[iCnt]);
    }

}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0;

    printf("enter the size: ");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("the elements are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    EvenElementArray(Arr,iSize);

    return 0;
}