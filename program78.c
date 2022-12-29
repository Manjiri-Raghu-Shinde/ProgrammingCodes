#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplayReverse(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }

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

    printf("the arrays us traversed reverse:\n");

   DisplayReverse(ptr,iLength);
    

    free(ptr);
    
    return 0;
}

