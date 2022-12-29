#include<stdio.h>
//#include<stdlib.h>

int Summation(int iData[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+iData[iCnt];
    }

    return iSum;
}

int main()
{
    //int iElements=0;
    int iArr[5];
    int iCnt=0,iRet=0;

    //printf("Enter number of elemnts: ");
    //scanf("%d",&iElements);
    printf("enter the elemnts:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&iArr[iCnt]);
    }

    printf("Elemnts of array  are:\n");

     for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",iArr[iCnt]);
    }

    iRet=Summation(iArr,5);
    printf("Addition of all elements is:%d\n",iRet);
    
    return 0;
}