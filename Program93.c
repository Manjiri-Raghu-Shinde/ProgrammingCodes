#include<stdio.h>

void strwerX(char *str){
    while(*str != '\0'){
        if(*str >= 'a' && *str<= 'z'){
            *str=*str-32;
        }

        str++;
    }
}
int main(){
    char Arr[50];

    printf("enter sentence:\n");
    scanf("%[^'\n]s",Arr);

    strwerX(Arr);

    printf("strinf:%s\n",Arr);

    return 0;
}