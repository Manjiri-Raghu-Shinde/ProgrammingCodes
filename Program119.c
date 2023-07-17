/*
Problem 1:
Write a function that takes an array of integers as input and returns the reverse of the array. For example, if the input array is [1, 2, 3, 4, 5], the function should return [5, 4, 3, 2, 1].
*/

#include<stdio.h>
#include<stdlib.h>

void ReverseArray(int Arr[],int iSize){
    int iStart=0,iEnd=iSize-1;
    int iCnt=0;
    int temp=0;

    for(iCnt=0;iCnt<iSize;iCnt++){

        if(iStart<iEnd){

            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }
    }
}

int main(){

    int *Arr=NULL;
    int iSize=0,iCnt=0;

    printf("enter size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));
    
    printf("enter the array elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    ReverseArray(Arr,iSize);

    printf("the reverse array elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}