#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//float Average(int *Arr,int iSize)
int SummationOfEvenCount(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSum=iSum+Arr[iCnt];
           
        }
        
        
    }

  return iSum;
   

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

   iRet=SummationOfEvenCount(ptr,iLength);
   printf("Summation of even numbers is:%d",iRet);

    free(ptr);
    
    return 0;
}