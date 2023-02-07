#include<stdio.h>

void DisplayRev(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    
    
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\n",iCnt);
    }
   
    }

int main()
{
    int iValue1=0,iValue2=0;

    printf("enter starting point: ");
    scanf("%d",&iValue1);

    printf("enter ending point: ");
    scanf("%d",&iValue2);

   DisplayRev(iValue1,iValue2);

   
    return 0;

}