#include <stdio.h>

int Addition(int iNo1, int iNo2) {
    return iNo1 + iNo2;
}

int main() {
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    printf("Enter number one:\n");
    scanf("%d", &iValue1);

    printf("Enter number two:\n");
    scanf("%d", &iValue2);

    iAns = Addition(iValue1, iValue2);

    printf("The addition of two numbers is: %d\n", iAns);

    return 0;
}
