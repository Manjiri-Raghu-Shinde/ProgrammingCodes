#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize){
    int iCount=0;
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]%2 == 0){
            iCount++;
        }
    }

    return iCount;
}
int main(){

    int *Arr=NULL;
    int iCnt=0,iRet=0,iLength=0;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(iLength * sizeof(int));

    printf("enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);

    }

    iRet=CountEven(Arr,iLength);

    printf("the count of even elements is:%d\n",iRet);
    
    return 0;
}