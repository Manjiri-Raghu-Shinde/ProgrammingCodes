#include<stdio.h>

int NonFactors(int iNo)
{
    int iCnt = 0;
    int iSum=0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum=iSum+iCnt;
        }
    }

    return iSum;
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    
    iRet=NonFactors(iValue);
    printf("Summation of the non factors are:%d\n",iRet);

}