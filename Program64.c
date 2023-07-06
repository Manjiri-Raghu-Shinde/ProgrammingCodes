#include<stdio.h>

int main(){
    char arr[100];
    printf("enter your full name:\n");
    scanf("%[^'\n]s",arr);

    printf("the full name is %s",arr);

    return 0;
}