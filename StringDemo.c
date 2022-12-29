#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[5]={'a','b','c','d','\0'};

    char Brr[5]="abcd";

    char Crr[]="abcd";

            printf("%s\n",Arr);
            printf("%s\n",Brr);
            printf("%s\n",Crr);

            printf(" size of arr %d\n",sizeof(Arr));
            printf(" size of brr %d\n",sizeof(Brr));
            printf(" size of crr %d\n",sizeof(Crr));

            printf(" length of arr %d\n",strlen(Arr));
            printf(" length of brr %d\n",strlen(Brr));
            printf(" length of crr %d\n",strlen(Crr));


        return 0;
}