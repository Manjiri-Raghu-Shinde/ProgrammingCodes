#include <stdio.h>

int DesriredInput(int iNo)
{
    int iResult = iNo;
    return iResult;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter the desired number:\n");
    scanf("%d", &iValue);
    iret = DesriredInput(iValue);
    printf("The entered number was: %d\n", iret);
    return 0;
}