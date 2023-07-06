#include<stdio.h>

void Pattern(int iRow,int iCol){
    int i=0,j=0;

    for(i=1;i<=iRow;i++){
        for(j=1;j<=iCol;j++){
            if(i==1 || i==iRow){
                printf("@\t");
            }else{
                printf("*\t");
            }
        }

        printf("\n");
    }
}

int main(){
    int iRow=0,iCol=0;

    printf("enter number of rows:\n");
    scanf("%d",&iRow);

    printf("enter number of columns:\n");
    scanf("%d",&iCol);

    Pattern(iRow,iCol);

    return 0;
}