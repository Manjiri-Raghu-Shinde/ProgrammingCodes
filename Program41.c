#include<stdio.h>
#include<stdlib.h>

void CountEvenOdd(int Arr[],int iSize){
    int iCountEven=0,iCountOdd=0;
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]%2 != 0){
            iCountOdd++;
        }
    }

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]%2 == 0){
            iCountEven++;
        }
    }

    printf("the count of even number is:%d\n",iCountEven);
    printf("the count of odd number is:%d\n",iCountOdd);
    
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

    CountEvenOdd(Arr,iLength);
    
    return 0;
}