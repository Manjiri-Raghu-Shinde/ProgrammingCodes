#include<stdio.h>

void whileLoopDemo(int No){
    int icnt=0;
    while(icnt<=No){
        printf("jay ganesh\n");
        icnt++;
    }
}
int main(){
    int iLoop=0;

    printf("enter the number of iterations:\n");
    scanf("%d",&iLoop);

    whileLoopDemo(iLoop);
    return 0;
}