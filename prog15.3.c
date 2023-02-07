#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequency(int Arr[],int iSize)
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
    if(iFrequency!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
   
}
int main()
{
    int *ptr=NULL;
    int iLength=0;
    int i=0;
    BOOL bret= FALSE;
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");

    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }
   bret=Frequency(ptr,iLength);
   if(bret==1)
   {
    printf("11 is present");
   }
   else{
    printf("11 is not present");
   }

    free(ptr);
    
    return 0;
}