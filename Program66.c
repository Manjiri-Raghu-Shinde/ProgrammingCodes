#include<stdio.h>

int CountWords(char *str){
    int iCount=0;
    while(*str != '\0'){
        iCount++;
        str++;
    }

    return iCount;
}

int main(){

    char arr[100];
    int iRet=0;
    
    printf("enter the string\n");
    scanf("%[^'\n]s",arr);

    iRet=CountWords(arr);
    printf("the number of words are:%d\n",iRet);
    return 0;
}