#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;


    if((*First)==NULL && (*Last)==NULL)
    {
        *First=*Last=newn;
        newn->next=newn->prev=*First;
        (*Last)->next=(*First);
        (*First)->prev=(*Last);
    }
    else
    {
        newn->next=*First;
        newn->prev=*Last;
        *First=newn;
        (*Last)->next=*First;
        (*First)->prev=*Last;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;


    if((*First)==NULL && (*Last)==NULL)
    {
        *First=*Last=newn;
        newn->next=newn->prev=*First;
        (*Last)->next=(*First);
        (*First)->prev=(*Last);
    }
    else
    {
        newn->prev=*Last;
        newn->next=*First;
        *Last=(*Last)->next=(*First)->prev=newn;
        (*Last)->next=(*First);
        (*First)->prev=(*Last);
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        return;
    }
    else if(*First == *Last)    // Single node in LL
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        *First = (*First)->next;
        (*First)->prev=*Last;
        free(temp);
        (*Last) ->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *Last;

    if((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        return;
    }
    else if(*First == *Last)    // Single node in LL
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        *Last=(*Last)->prev;
        (*First)->prev=*Last;
        (*Last)->next=*First;
        free(temp);
    }
}

void InsertAtPos(PPNODE First,PPNODE Last, int no, int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First,*Last);

    if((ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,Last,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;      // X

        temp = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next->prev = newn;    // X
        temp->next = newn;
        newn->prev = temp;      // X
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last, int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0, NodeCnt = 0;
    NodeCnt = Count(*First,*Last);

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        temp1 = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;  
        temp2->next->prev = temp1;      // X
        free(temp2);
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,11);
    InsertFirst(&Head,&Tail,21);
    InsertLast(&Head,&Tail,31);
    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("the count is : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("the count is : %d\n",iRet);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("the count is : %d\n",iRet);

    InsertFirst(&Head,&Tail,11);
    InsertFirst(&Head,&Tail,21);
    InsertLast(&Head,&Tail,31);

    InsertAtPos(&Head,&Tail,33,4);
    Display(Head,Tail);

    DeleteAtPos(&Head,&Tail,4);
    Display(Head,Tail);

    return 0;
}