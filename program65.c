#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *ptr=NULL;
    int iElements=0;
    
    int iCnt=0,iRet=0;

    printf("Enter number of elemnts:\n ");
    scanf("%d",&iElements);

    ptr = (int *)malloc(iElements*sizeof(int));

    printf("enter the elemnts:\n");

    for(iCnt=0;iCnt<iElements;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elemnts of array  are:\n");

     for(iCnt=0;iCnt<iElements;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=Summation(ptr,iElements);
    printf("Addition of all elements is:%d\n",iRet);
    
    free(ptr);

    return 0;
}