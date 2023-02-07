#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}


void MaximumDigit(PNODE First)
{
    int iMax = 0, iDigit = 0, iNo = 0;   
    
    while(First != NULL)
    {
        iNo = First->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit>iMax)
            {
                iMax=iDigit;
            }
            if(iMax==9)
            {
                break;
            }
            iNo = iNo / 10;
        }
        printf("maximum of digits of the number %d is %d\n",First->data, iMax);
        First = First->next;
        iMax = 0;
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    MaximumDigit(Head);

    return 0;
}