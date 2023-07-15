#include<stdio.h>
#include<stdlib.h>

void ArrayRotate(int Arr[],int iSize,int iStep){
    iStep = iStep % iSize;

    // Rotate the array
    for (int i = 0; i < iStep; i++) {
        int temp = Arr[0];
        for (int j = 0; j < iSize - 1; j++) {
            Arr[j] = Arr[j + 1];
        }
        Arr[iSize - 1] = temp;
    }

    
}

int main(){
    int *Arr=NULL;
    int iCnt=0,iSize=0,iStep=0;

    printf("enter size of array:\n");
    scanf("%d",&iSize);

    printf("enter step with which you want to rotate array:\n");
    scanf("%d",&iStep);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter elements of array:\n");

    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    ArrayRotate(Arr,iSize,iStep);

    printf("\nRotated Array: ");
    for (int i = 0; i < iSize; i++) {
        printf("%d ", Arr[i]);
    }
    return 0;
}