#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt=0,iCnt1=0;
    int iMin=Arr[0];
    int iDigit=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            iCnt1++;
            Arr[iCnt]=Arr[iCnt]%10;
            
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
   
    Digits(ptr,iLength);  
    free(ptr);
    
    return 0;
}