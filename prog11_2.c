#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{

    
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
        printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("enter starting point: ");
    scanf("%d",&iValue1);

    printf("enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;

}