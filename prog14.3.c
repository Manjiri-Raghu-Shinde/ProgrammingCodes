#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    int iEven=0,iOdd=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%5==0&&Arr[iCnt]%2==0)
        {
            
            printf("%d\t",Arr[iCnt]);
        }
        
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
    printf("elements even and divisible by 5 \n");
   Display(ptr,iLength);
  

    free(ptr);
    
    return 0;
}