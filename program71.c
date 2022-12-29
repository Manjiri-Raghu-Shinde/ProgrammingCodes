#include<stdio.h>
#include<stdlib.h>

//float Average(int *Arr,int iSize)
void SummationOfEvenOddCount(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    int iSum1=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSum=iSum+Arr[iCnt];
           
        }
        else{
            iSum1=iSum1+Arr[iCnt];
        }
        
        
    }

  printf("summation of even members is %d\n",iSum);
  printf("summation of odd members is %d\n",iSum1);

   

}
int main()
{
    int *ptr=NULL;
    int iLength=0;
    int i=0;
    
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");

    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }

   SummationOfEvenOddCount(ptr,iLength);
   

    free(ptr);
    
    return 0;
}