#include<stdio.h>

void toToggleX(char *str){
    while(*str != '\0'){
        if(*str >= 'A' && *str<= 'Z'){
            *str=*str+32;
        }else
        {
            *str=*str-32;
            /* code */
        }
        

        str++;
    }
}
int main(){
    char Arr[50];

    printf("enter sentence:\n");
    scanf("%[^'\n]s",Arr);

    toToggleX(Arr);

    printf("strinf:%s\n",Arr);

    return 0;
}