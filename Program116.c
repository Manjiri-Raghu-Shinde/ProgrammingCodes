/*
Problem 5:
Write a function that takes two arrays of integers as input and returns a new array that contains only the common elements between the two arrays.
*/

#include<stdio.h>
#include<stdlib.h>

void MatchingElements(int Arr[],int Arr1[],int iSize,int iSize1){
    int iCnt=0,iCnt1=0,iCnt2=0;
    int *Arr2=NULL;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        for(iCnt1=0;iCnt1<iSize1;iCnt1++){
            if(Arr1[iCnt1]==Arr[iCnt]){
                iCount++;
            }
        }
    }

    Arr2=(int *)malloc(iCount*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++){
        for(iCnt1=0;iCnt1<iSize1;iCnt1++){
            if(Arr1[iCnt1]==Arr[iCnt]){
                Arr2[iCnt2]=Arr1[iCnt1];
                iCnt2++;
            }
        }
    }

    printf("the new array is:\n");
    for(iCnt=0;iCnt<iCount;iCnt++){
        printf("%d\n",Arr2[iCnt]);
    }
    
    
}

int main(){
    int *Arr=NULL;
    int *Arr1=NULL;
    int iSize=0,iSize1=0,iCnt=0;

    printf("enter the size of array1:\n");
    scanf("%d",&iSize);

    printf("enter the size of array2:\n");
    scanf("%d",&iSize1);

    Arr=(int *)malloc(iSize*sizeof(int));
    Arr1=(int *)malloc(iSize1*sizeof(int));

    printf("enter elements of array1:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("enter elements of array2:\n");
    for(iCnt=0;iCnt<iSize1;iCnt++){
        scanf("%d",&Arr1[iCnt]);
    }

    MatchingElements(Arr,Arr1,iSize,iSize1);


    return 0;
}