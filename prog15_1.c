#include<stdio.h>
#include<stdlib.h>


int CountEven(int Arr[],int iSize)
{
    int iCnt=0;
    int iEven=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven++;
        }
        
    }
    return iEven;
   
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
   
    iRet=CountEven(ptr,iLength);
     printf("frequency of even numbers : %d\n",iRet);

    free(ptr);
    
    return 0;
}