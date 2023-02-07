#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}
int SearchLastOcc(PNODE First,int iNo)
{
    int ivalue=Count(First)+1;
    int iCnt=1;
    while(First!=NULL)
    {
        if(First->data==iNo)
        {
            break;
        }
        First=First->next;
        iCnt++;
    }
    return ivalue-iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet=0;
    int iValue=0;
    InsertLast(&Head,11);
    InsertLast(&Head,28);
    InsertLast(&Head,51);
    InsertLast(&Head,496);
    InsertLast(&Head,51);
    InsertLast(&Head,8128);
    printf("enter the value u want to search:\n");
    scanf("%d",&iValue);
    iRet=SearchLastOcc(Head,iValue);
    printf("the position is : %d\n",iRet);

    return 0;
}