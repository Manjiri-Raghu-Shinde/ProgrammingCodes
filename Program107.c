//Write a function that takes two arrays of integers as input and returns true if there exists a pair of elements (one from each array) whose sum is zero. Otherwise, it should return false.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckSumAsZero(int Arr1[],int Arr2[],int iSize){
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if((Arr1[iCnt]+Arr2[iCnt])==0){
            return true;
        }else{
            return false;
        }
        
    }

}


int main(){
    int *Arr1=NULL,*Arr2=NULL;
    int iSize=0;
    int iCnt=0;
    bool bRet=false;

    printf("enter the size of array you want to create:\n");
    scanf("%d",&iSize);

    Arr1=(int *)malloc(iSize*sizeof(int));
    Arr2=(int *)malloc(iSize*sizeof(int));

    printf("enter elements of array 1:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr1[iCnt]);
    }

     printf("enter elements of array 2:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr2[iCnt]);
    }

    bRet=CheckSumAsZero(Arr1,Arr2,iSize);

    if(bRet==true){
        printf("the array contains complement pairs\n");
    }else{
        printf("the array contains not complement pairs\n");   
    }


    return 0;
}