#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]<iMin)
       {
            iMin=Arr[iCnt];
       }
    }
    return iMin;
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
   
    iRet=Minimum(ptr,iLength);  
    printf("the smallest Number is %d\n",iRet);
    free(ptr);
    
    return 0;
}