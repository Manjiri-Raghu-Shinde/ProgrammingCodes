#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumbers(int Arr[],int iSize,int iNo)
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
    if(iFrequency!=0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int *ptr=NULL;
    int iLength=0;
    int i=0;
    int iValue=0;
    bool bRet=0;
    
    
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

   bRet=CheckNumbers(ptr,iLength,iValue);

   if(bRet==true)
   {
    printf("the number is present");
   }
   else
   {
    printf("the number is not present");
   }
   

    free(ptr);
    
    return 0;
}