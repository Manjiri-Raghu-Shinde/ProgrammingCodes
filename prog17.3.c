#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=Arr[0];
    int iMax=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]<iMin)
       {
            iMin=Arr[iCnt];
       }
       else
       {
            iMax=Arr[iCnt];
       }
    }

    return iMax-iMin;
}
int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iRet=0;
    int i=0;
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }
   
    iRet=Difference(ptr,iLength);  
    printf("the Difference is %d\n",iRet);
    free(ptr);
    
    return 0;
}