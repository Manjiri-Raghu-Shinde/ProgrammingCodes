#include<stdio.h>

int main(){
    int iRow=0;
    int iCol=0;
    int i=0,j=0;

    printf("enter number of rows:\n");
    scanf("%d",&iRow);

    printf("enter number of columns:\n");
    scanf("%d",&iCol);

    int Arr[iRow][iCol];

     printf("enter elements:\n");
     
    for(i=0;i<iRow;i++){
        for(j=0;j<iCol;j++){
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("elements are:\n");

    for(i=0;i<iRow;i++){
        for(j=0;j<iCol;j++){
            printf("%d\n",Arr[i][j]);
        }
    }

    return 0;
}