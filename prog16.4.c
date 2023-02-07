#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt=0;
    
    printf("the values in the range are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf("%d\n",Arr[iCnt]);
        }    
    }

}
int main()
{
    int *ptr=NULL;
    int iLength=0;
    int i=0;
    int iValue1=0;
    int iValue2=0;
    
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));
    
    printf("enter the numbers:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);

    }
   
    printf("starting point of range ");
    scanf("%d",&iValue1);
    printf("ending point of range ");
    scanf("%d",&iValue2);

    Range(ptr,iLength,iValue1,iValue2);
    
        
    free(ptr);
    
    return 0;
}