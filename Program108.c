//Write a function that takes an array of integers as input and returns an array where each element at index i is the product of all the elements in the original array except the element at index i. The product should be calculated without using the division operator.

#include<stdio.h>
#include<stdlib.h>

void MultiplicationExcludingSelf(int Arr[],int iSize){
    int Arr1[iSize];
    int iCnt=0,iCurrentItem=0;
    int i=0,j=0;
    int iMultRight=1,iMultLeft=1;

    for(iCnt=0;iCnt<iSize;iCnt++){
        Arr1[iCnt]=Arr[iCnt];
    }

    for(iCnt=0;iCnt<iSize;iCnt++){
        for(i=iCnt+1;i<iSize;i++){
            iMultRight=Arr1[i]*iMultRight;
        }

        for(j=iCnt-1;j>=0;j--){
            iMultLeft=iMultLeft*Arr1[j];
        }

        Arr[iCnt]=iMultLeft*iMultRight;
        iMultLeft=1;
        iMultRight=1;
    }
}

int main(){
    int *Arr=NULL;
    int iCnt=0,iSize=0;

    printf("enter size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter elements of array:\n");

    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    MultiplicationExcludingSelf(Arr,iSize);

    printf("the array is:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}