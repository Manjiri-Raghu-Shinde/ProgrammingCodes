#include<stdio.h>
#include<stdlib.h>

void RemoveDuplicate(int Arr[],int iSize){
    int iCnt=0,iCount=0,iCnt1=0;
    

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]!=Arr[iCnt+1]){
            iCount++;
        }
    }

    // printf("%d",iCount);
    int Arr2[iCount];

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]!=Arr[iCnt+1]){
            Arr2[iCnt1]=Arr[iCnt];
            iCnt1++;
        }
    }

    for(iCnt1=0;iCnt1<iCount;iCnt1++){
        printf("%d\t",Arr2[iCnt1]);
    }

}

int main(){
    int iLength=0;
    int *Arr=NULL;
    int iCnt=0;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);

    Arr=(int *)malloc(iLength * sizeof(int));

    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }
    
    RemoveDuplicate(Arr,iLength);

    return 0;
}