#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//float Average(int *Arr,int iSize)
void DisplayEvenOddCount(int Arr[],int iSize)
{
    int iCnt=0;
    int EvenCnt=0,OddCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            EvenCnt++;
           
        }
        else
        {
            OddCnt++;
        }
        
    }

    printf("Even Count:%d\n",EvenCnt);
    printf("Odd Count:%d\n",OddCnt);
  

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

    DisplayEvenOddCount(ptr,iLength);

    free(ptr);
    
    return 0;
}