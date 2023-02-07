#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iSize)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
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
    int iRet=0;
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");

    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }
   iRet=Frequency(ptr,iLength);
   printf("frequency of 11 is:%d\n",iRet);
   
    free(ptr);
    
    return 0;
}