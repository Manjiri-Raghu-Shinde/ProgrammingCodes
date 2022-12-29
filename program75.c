#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int ReturnIndex(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
  

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           break;
        }
    
    }
    if(iCnt==iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }  
}
int main()
{
    int *ptr=NULL;
    int iLength=0;
    int i=0;
    int iValue=0;
    int iRet=0;
    
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");

    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }

    printf("the number we want to check: ");
    scanf("%d",&iValue);

   iRet=ReturnIndex(ptr,iLength,iValue);

   printf("the index is:%d",iRet);
    free(ptr);
    
    return 0;
}