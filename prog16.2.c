#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize,int No)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
            iFrequency++;
            break;
        }
        
    }
   if(iFrequency==-1)
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
    int iRet=0;
    
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
    iRet=FirstOcc(ptr,iLength,i);
    printf("the index of number is %d",iRet);
        
    free(ptr);
    
    return 0;
}