#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo){
    int iCount=0;
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==iNo){
            iCount++;
        }
    }

    return iCount;
}
int main(){

    int *Arr=NULL;
    int iCnt=0,iRet=0,iLength=0, iValue=0;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);


    Arr=(int *)malloc(iLength * sizeof(int));

    printf("enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);

    }

    printf("enter the number whose frequency you want to find :\n");
    scanf("%d",&iValue);

    iRet=Frequency(Arr,iLength,iValue);

    printf("the count of the number is:%d\n",iRet);
    
    return 0;
}