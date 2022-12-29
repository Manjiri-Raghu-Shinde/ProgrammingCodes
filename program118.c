#include<stdio.h>

int main()
{
    int i=0;
    printf("________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________\n");

    printf("character\tDecimal\tHex\tOctal\t");
    for(i=0;i<=127;i++)
    {
        printf("%c \t %d \t %x \t %o \t\n",i,i,i,i);
    }
    printf("\n_____________________________________\n");
    return 0;
}