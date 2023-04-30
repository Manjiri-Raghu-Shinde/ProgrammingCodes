#include <stdio.h>
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iSum = 0;
    printf("enter two numbers of your choice:\n");
    scanf("%d %d", &iValue1, &iValue2);
    iSum = iValue1 + iValue2;
    printf("the addition is : %d\n", iSum);

    return 0;
}