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
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        printf("%d\t",iCnt);
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
