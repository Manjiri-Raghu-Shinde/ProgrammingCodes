#include<stdio.h>

void DisplayDigit(char *str)
{
    int iDigit=0;
    printf("the digits are:");
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iDigit=*str;
        }
        printf("%c\t",iDigit);
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);   // stelwrX(100);

    return 0;
}