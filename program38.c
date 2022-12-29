#include<stdio.h>
//5*1=5
//5*2=10      iNo  * iCnt = iMult (this logic is iterative)
//5*3=15
/*
for(iCnt=1;iCnt<=10;iCnt++)
{
    iMult = iNo*iCnt;
}
*/
void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iMult=iNo*iCnt;
        printf("%d\n",iMult);
    }

}
int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    printf("the table of %d is\n",iValue);
    DisplayTable(iValue);
}