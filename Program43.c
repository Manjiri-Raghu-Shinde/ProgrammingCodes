#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[],int iSize,int iNo){
    int iCount=0;
    int iCnt=0;
    bool bFlag=false;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==iNo){
            bFlag=true;
        }
    }

    return bFlag;
}
int main(){

    int *Arr=NULL;
    int iCnt=0,iLength=0, iValue=0;
    bool bRet=false;

    printf("enter the size of array:\n");
    scanf("%d",&iLength);


    Arr=(int *)malloc(iLength * sizeof(int));

    printf("enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Arr[iCnt]);

    }

    printf("enter the number you want to find :\n");
    scanf("%d",&iValue);

    bRet=CheckOccurance(Arr,iLength,iValue);

    if(bRet==true){
        printf("the element is present\n");
    }else
    {
        printf("the element is not present\n");
        /* code */
    }
    
    
    return 0;
}