#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iSize,int No)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==No)
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
    BOOL bRet=FALSE;
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }
    printf("enter the number whose frequency you want to search:\n");
    scanf("%d",&i);
    bRet=Check(ptr,iLength,i);
    if(bRet==1)
    {
        printf("%d is present\n",i);
    }
    else
    {
        printf("%d is not present\n",i);
    }
   
    free(ptr);
    
    return 0;
}