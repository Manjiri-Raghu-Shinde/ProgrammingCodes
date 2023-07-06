#include<stdio.h>
#include<stdlib.h>

int MinimumElement(int Arr[],int iSize){
    int iMin=Arr[0];
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]<iMin){
            iMin=Arr[iCnt];
        }
    }

    return iMin;
}

int main(){
    int *Arr=NULL;
    int iCnt=0,iRet=0,iLength=0;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(iLength * sizeof(int));

    printf("enter elements in array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    iRet=MinimumElement(Arr,iLength);
    printf("the minimum element is : %d\n",iRet);


    return 0;
}