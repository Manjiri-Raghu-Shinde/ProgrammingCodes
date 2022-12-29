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

void InsertFirst(PPNODE First , int no)//call by address karaycha ahe mhanun PPNODE
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 allocate memory
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)//if linked list is empty
    {
        *First = newn;
    }
    else//if linked list contains at least one node
    {
        newn->next=*First;
        *First=newn;
    }
}


void Display(PNODE First)//call by value mule PNODE
{
    printf("elements from the linked last are:\n");

    while(First!=NULL)
    {
        printf("| %d |-> ",First->data);
        First=First->next;
    }
    printf("NULL \n");
}

int Count(PNODE First)//call by value mule PNODE
{
    int iCnt=0;

    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
}

int main()
{
    PNODE  Head = NULL;//first node address
    int iRet=0;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet=Count(Head);
    printf("number of nodes : %d\n",iRet);
    return 0;
}