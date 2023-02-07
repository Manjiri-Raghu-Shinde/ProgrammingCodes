#include<stdio.h>

char strlwx(char *str)
{
    int i=0;
    while(str[i]='\0')
    {
        if (str[i] > 64 && str[i] < 91) //or if(str[i]>='A' && str[i]<='Z')
        str[i] += 32;
        i++;   
    }
    return str;
    
}
int main()
{
    char arr[20];
    printf("enter string  ");
    scanf("%[^'\n']s",arr);
    strlwx(arr);
    printf("modified string is %s",arr);
    return 0;
}