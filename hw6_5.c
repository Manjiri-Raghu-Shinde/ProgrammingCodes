#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    int iPercent;
    
    iPercent=(iNo2*100)/iNo1;

    return iPercent;

}
int main()

{
    int iValue1=0,iValue2=0;
    float fRet=0.0;
    printf("enter total marks:\n");
    scanf("%d",&iValue1);
    printf("enter obtained marks:\n");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    printf("the percentage is: %f\n",fRet);
    return 0;
}