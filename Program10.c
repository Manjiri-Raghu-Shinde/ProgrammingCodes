#include<stdio.h>

void ForLoopDemo(int iNo){
    int icnt=0;

    for(icnt=0;icnt<iNo;icnt++){
        printf("jay ganesh\n");
    }
}
int main(){

    int iLoop=0;

    printf("enter the number of times the loop should iterate:\n");
    scanf("%d",&iLoop);
    ForLoopDemo(iLoop);
    return 0;
}