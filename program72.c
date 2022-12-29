#include<stdio.h>
#include<stdlib.h>

//float Average(int *Arr,int iSize)
int FrequencyOfNumbers(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
   int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           iFrequency++;
           
        }
        
    }

  return iFrequency;

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

    printf("the number we want to count: ");
    scanf("%d",&iValue);

   iRet=FrequencyOfNumbers(ptr,iLength,iValue);

   printf("the frequency is %d",iRet);
   

    free(ptr);
    
    return 0;
}