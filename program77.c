#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LargestNumbers(int Arr[],int iSize)
{
    int iMax=Arr[0];
    int iCnt=0;


    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    
    }
    return iMax;

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


   iRet=LargestNumbers(ptr,iLength);

   printf("the largest number is :%d",iRet);
   

    free(ptr);
    
    return 0;
}

//570 360 1070 820 980