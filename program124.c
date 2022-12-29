#include<stdio.h>

int main()
{
    char sArr[50];
    printf("enter full name\n");

    scanf("%[^'\n']s",sArr);
    
    printf("the full name is %s\n",sArr);
    return 0;
}