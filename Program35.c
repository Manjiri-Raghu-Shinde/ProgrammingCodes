#include<stdio.h>
#include<stdlib.h>

void DisplayElements(int Arr[],int iSize){
    int iCnt=0;

    printf("the elements of array are:\n");

    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }
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

    DisplayElements(Arr,iLength);

    return 0;

}