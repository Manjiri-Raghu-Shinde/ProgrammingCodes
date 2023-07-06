#include<stdio.h>
#include<stdlib.h>

int AverageOfElements(int Arr[],int iSize){
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
    }

    return (iSum/iSize);
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

    iRet=AverageOfElements(Arr,iLength);

    printf("the average of elements in array is:%d\n",iRet);
    return 0;

}