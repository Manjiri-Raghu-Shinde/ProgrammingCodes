#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckSumEqualSubarray(int Arr[], int iSize, int iSizeofSubarray, int NeededSum) {
    int iStart = 0;
    int iSum = 0;

    // Calculate the sum of the first subarray of size iSizeofSubarray
    for (int i = 0; i < iSizeofSubarray; i++) {
        iSum += Arr[i];
    }

    // Slide the window and check if the sum matches the needed sum
    for (int i = iSizeofSubarray; i <= iSize; i++) {
        if (iSum == NeededSum) {
            return true;
        }

        // Slide the window by subtracting the element going out and adding the new element
        iSum -= Arr[iStart];
        iSum += Arr[i];
        iStart++;
    }

    return false;
}

int main() {
    int* Arr = NULL;
    int iSize = 0, iSizeofSubarray = 0, iNeededSum = 0;
    bool bRet = false;

    printf("Enter the size of the array: ");
    scanf("%d", &iSize);

    printf("Enter the size of the subarray: ");
    scanf("%d", &iSizeofSubarray);

    printf("Enter the sum that should be tallied with the array: ");
    scanf("%d", &iNeededSum);

    Arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the array elements:\n");
    for (int i = 0; i < iSize; i++) {
        scanf("%d", &Arr[i]);
    }

    bRet = CheckSumEqualSubarray(Arr, iSize, iSizeofSubarray, iNeededSum);
    if (bRet) {
        printf("The subarray is present\n");
    } else {
        printf("The subarray is not present\n");
    }

    free(Arr);

    return 0;
}
