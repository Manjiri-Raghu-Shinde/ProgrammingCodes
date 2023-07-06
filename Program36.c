#include<stdio.h>
#include<stdlib.h>

int SummationOfElements(int Arr[],int iSize){
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
    }

    return iSum;
}

int main(){

    int iRet=0,iLength=0,iCnt=0;
    int *Arr=NULL;

    printf("enter size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(iLength * sizeof(int));

    printf("enter the elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=SummationOfElements(Arr,iLength);

    printf("the sum of elements in array is:%d\n",iRet);
    return 0;

}