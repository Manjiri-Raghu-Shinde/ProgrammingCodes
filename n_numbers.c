//accept n numbers from user and perform the addition operation
//input
//value of n = 5
//value : 10 20 30 40 50 
//output 
//addition : 150
/*
    steps to develop the application
    step 1 : understand the problem statement
    step 2 : write the program
    step 3 : decide the programming language
    step 4 : write the program
    step 5 : test the program

*/

//algorithm
/*

    start
        accept the number of elements from user
        allocate the memory to store that number
        accept the numbers from user
        perform the addition of all numbers
        display the addition
    end
*/

#include<stdio.h>  //printf and scanf
#include<stdlib.h>     //for malloc and free

///////////////////////////////////////////////////////
//
//  Application name : Addition of N numbers
//  Input : N numbers
//  Output : Addition
//  Author : Manjiri Shinde
//  Date : 18/9/2022
//
///////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;  //pointer to hold address of array
    int iSize = 0;  //variable to hold size of array
    register int i = 0;  //loop counter
    int iSum = 0;  // to hold the addition
    printf("enter how many elements you want?\n");
    scanf("%d",&iSize);

    //allocate the memory

    Arr = (int *)malloc(iSize * sizeof(int));
    printf("enter the elements \n");

    for (i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);

    }
    for (i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    printf("Addition is : %d\n",iSum);

    free(Arr);


    return 0;
}