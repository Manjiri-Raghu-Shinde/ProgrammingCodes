#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iSize,int No)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==No)
        {
            iFrequency++;
        }
        
    }
   if(iFrequency!=0)
   {
    return iCnt;
   }
   else
   {
    return -1;
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
    iRet=LastOcc(ptr,iLength,i);
    if(iRet!=0){
    printf("the index is : %d",iRet);
    }
    else{
        printf("the number is not present");
    }
        
    free(ptr);
    
    return 0;
}