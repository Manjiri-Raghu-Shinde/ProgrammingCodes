#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckSumEqualSubarray(int Arr[], int iSize, int iSizeofSubarray, int NeededSum) {
    int iCnt = 0, iCnt1 = 0;
    int iSum = 0;
    int tempSize = iSizeofSubarray;
    int iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++) {
        iCnt1 = iCnt;
        while (tempSize != 0) {
            iSum = iSum + Arr[iCnt1];
            iCnt1++;
            tempSize--;
        }

        if (iSum == NeededSum) {
            iCount++;
        }

        iSum = 0;
        tempSize = iSizeofSubarray; 
    }

    if (iCount == 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int* Arr = NULL;
    int iSize = 0, iCnt = 0, iSizeofSubarray = 0, iNeededSum = 0;
    bool bRet = false;

    printf("Enter the size of the array: ");
    scanf("%d", &iSize);

    printf("Enter the size of the subarray: ");
    scanf("%d", &iSizeofSubarray);

    printf("Enter the sum that should be tallied with the array: ");
    scanf("%d", &iNeededSum);

    Arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the array elements:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &Arr[iCnt]);
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
