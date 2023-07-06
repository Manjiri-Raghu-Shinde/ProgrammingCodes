#include<stdio.h>

void DisplaySen(char *str){

    while(*str != '\0'){
        printf("%c", *str);

        str++;
    }
}

int main(){

    char arr[100];

    printf("enter desired number:\n");
    scanf("%[^'\n]s",arr);

    DisplaySen(arr);
    return 0;
}