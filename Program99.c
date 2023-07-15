#include<stdio.h>
#include<stdlib.h>

void SmallestLargestElement(int Arr[],int iLength){
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]>iMax){
            iMax=Arr[iCnt];
        }
    }

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]<iMin){
            iMin=Arr[iCnt];
        }
    }

    printf("smallest element:%d\n",iMin);
    printf("Largest element:%d\n",iMax);
}

int main(){
    int *Arr=NULL;
    int iCnt=0;
    int iSize=0;

    printf("enter size of array\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }


    SmallestLargestElement(Arr,iSize);

    return 0;
}