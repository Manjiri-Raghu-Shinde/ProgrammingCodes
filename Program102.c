#include<stdio.h>
#include<stdlib.h>

void ReverseArray(int Arr[],int iSize){
    int ifront=0;
    int iRear=iSize-1;
    int iTemp=0;
    int iCnt=0;

    while (ifront<iRear)
    {
        iTemp=Arr[ifront];
        Arr[ifront]=Arr[iRear];
        Arr[iRear]=iTemp;

        ifront++;
        iRear--;
    }

    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }
    
}

int main(){
    int *Arr=NULL;
    int iCnt=0;
    int iLength=0;

    printf("enter size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(sizeof(int)*iLength);
    printf("enter array elements:\n");

    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    ReverseArray(Arr,iLength);

    return 0;
}