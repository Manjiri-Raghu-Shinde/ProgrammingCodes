#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iLength){
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        iSum=iSum+Arr[iCnt];
    }

   return iSum;
}

int main(){
    int *Arr=NULL;
    int iCnt=0;
    int iSize=0;
    int iret=0;

    printf("enter size of array\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }


    iret=Addition(Arr,iSize);

    printf("Addition is:%d\n",iret);

    return 0;
}