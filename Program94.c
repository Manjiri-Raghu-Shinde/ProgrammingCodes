#include<stdio.h>

void struprX(char *str){
    while(*str != '\0'){
        if(*str >= 'A' && *str<= 'Z'){
            *str=*str+32;
        }

        str++;
    }
}
int main(){
    char Arr[50];

    printf("enter sentence:\n");
    scanf("%[^'\n]s",Arr);

    struprX(Arr);

    printf("strinf:%s\n",Arr);

    return 0;
}