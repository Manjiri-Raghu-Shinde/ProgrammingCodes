// swapping number with the help of pointer

#include <stdio.h>

void Swap(int* iNo1, int* iNo2) {
    int iTemp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = iTemp;
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number one:\n");
    scanf("%d", &iValue1);

    printf("Enter number two:\n");
    scanf("%d", &iValue2);

    Swap(&iValue1, &iValue2);

    printf("The swapped numbers are: %d %d\n", iValue1, iValue2);

    return 0;
}
