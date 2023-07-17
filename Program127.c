/*
Find arithmetic mean, variance and standard deviation of n elements
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Calculate(int Arr[],int iSize){
    int iMean=0,iVariance=0,iStandardDeviation=0,iMediate=0;
    int iCnt=0,iSum=0;

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }

    iMean=iSum/iSize;

    for(iCnt=0;iCnt<iSize;iCnt++){
        iMediate=iMediate+(Arr[iCnt]-iMean);
        iMediate=iMediate*iMediate;
    }

    iVariance=iMediate/iSize;

    iStandardDeviation-sqrt(iVariance);

    printf("the mean is %d\n",iMean);
    printf("the variance is %d\n",iVariance);
    printf("the standard deviation is %d\n",iStandardDeviation);

    
}

int main(){
    int *Arr=NULL;
    int iSize=0,iCnt=0;

    printf("enter the size of array:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter elements ofarray:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    // printf("elements ofarray:\n");
    // for(iCnt=0;iCnt<iSize;iCnt++){
    //     printf("%d ",Arr[iCnt]);
    // }

    Calculate(Arr,iSize);

    return 0;
}