#include<stdio.h>
#include<stdlib.h>

int CheckFirstOccurence(int Arr[],int iSize,int iNo){
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==iNo){
            break;
        }
    }

    return iCnt;
}

int main(){

    int iCnt=0,iLength=0,iValue=0,iRet=0;
    int *Arr=NULL;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(iLength*sizeof(int));

    printf("enter the array elemenets\n");
    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=CheckFirstOccurence(Arr,iLength,iValue);

    printf("the first occurance of number is:%d\n",iRet);

    return 0;
}