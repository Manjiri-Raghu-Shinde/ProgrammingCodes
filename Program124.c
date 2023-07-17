/*
Problem 3:
Write a function that takes an array of integers as input and returns a new array with all the elements in reverse order without modifying the original array.
*/

#include<stdio.h>
#include<stdlib.h>

void ReverseNewArray(int Arr[],int iSize){
    int iCnt=0;
    int iEnd=iSize-1;
    int *Arr2=NULL;
    Arr2=(int *)malloc(iSize*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++){
        while (iEnd>=0)
        {
            Arr2[iEnd]=Arr[iCnt];
            iEnd--;
        }
        

    }

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr2[iCnt]);
    }
    
    
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    // printf("%d",sizeof(Arr));

    ReverseNewArray(Arr,iSize);

    return 0;
}