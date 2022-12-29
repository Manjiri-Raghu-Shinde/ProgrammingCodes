#include<stdio.h>
/*
input : 5
output:
5  (start)
4  (displacement)
3
2
1   (end)
*/
void DisplayReversePattern(int iNo)
{
    int iCnt = 0;
    printf("------------------------------------------------------------------------------------\n");
    iCnt=iNo;
    while(iCnt>0)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    printf("\n----------------------------------------------------------------------------------\n");
}
int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    printf("the reverse order is:\n");
    DisplayReversePattern(iValue);
}
