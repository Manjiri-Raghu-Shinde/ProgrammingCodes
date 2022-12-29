#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First , PPNODE Last , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First==NULL)&&(*Last)==NULL)
    {
        *First=newn;
        *Last=newn;    
    }
    else
    {
        (*Last)->next=newn;
        newn->prev=*Last;
        (*Last)=newn;
    }
    (*Last)->next=(*First);
    (*First)->prev=(*Last);

}

void InsertFirst(PPNODE First , PPNODE Last , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First==NULL)&&(*Last)==NULL)
    {
        *First=newn;
        *Last=newn;   
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
    }
    (*Last)->next=(*First);
    (*First)->prev=(*Last);
}

void DeleteFirst(PPNODE First , PPNODE Last)
{
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
    }
    else if((*First)==(*Last))
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        *First=(*First)->next;
        free((*Last)->next);
        (*Last)->next=(*First);
        (*First)->prev=(*Last);
    }
    
}

void DeleteLast(PPNODE First , PPNODE Last)
{
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
    }
    else if((*First)==(*Last))
    {
        free(*First);
        *First=NULL;
        *Last=NULL;

    }
    else
    {
        *Last=(*Last)->prev;
        free((*First)->prev);
        (*Last)->next=(*First);
        (*First)->prev=(*Last);
    }
    
}

void InsertAtPos(PPNODE First , PPNODE Last , int no , int ipos)
{
    int NodeCnt=0;
    NodeCnt=Count(*First,*Last);
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    PNODE temp=*First;
    int iCnt=0;

    if((ipos<1)||(ipos>NodeCnt+1))
    {
        printf("invalid position\n");
        return;

    }
    if(ipos==1)
    {
        InsertFirst(First,Last,no);
    }
    else if(ipos==NodeCnt+1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        temp=*First;
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next = temp -> next;
        temp->next->prev = newn;    
        temp->next = newn;
        newn->prev = temp;    
    }
}

void DeleteAtPos(PPNODE First , PPNODE Last ,int ipos)
{
    int NodeCnt=0;
    NodeCnt=Count(*First,*Last);
    PNODE temp=*First;
    int iCnt=0;

    if((ipos<1)||(ipos>NodeCnt))
    {
        printf("invalid position\n");
        return;

    }
    if(ipos==1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos==NodeCnt+1)
    {
        DeleteLast(First,Last);
    }
    else
    {
        temp=*First;
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp; 
    }
}

int Count(PNODE First,PNODE Last)
{
    int iCnt=0;
    if(First==NULL && Last==NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        First=First->next;
    } while ((First)!=(Last)->next);
    
    return iCnt;
}

void Display(PNODE First , PNODE Last)
{
    if(First==NULL && Last==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    do
    {
        printf("| %d |<=>",First->data);
        First=First->next;
    } while ((First)!=(Last)->next);
    
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet=0;

    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    Display(Head,Tail);
    iRet=Count(Head,Tail);

    printf("\nNumber of nodes : %d\n",iRet);

    InsertLast(&Head,&Tail,51);
    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head,Tail);
    iRet=Count(Head,Tail);

    printf("\nNumber of nodes : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);
    iRet=Count(Head,Tail);

    printf("\nNumber of nodes : %d\n",iRet);
    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    iRet=Count(Head,Tail);

    printf("\nNumber of nodes : %d\n",iRet);

    InsertAtPos(&Head,&Tail,222,3);
    Display(Head,Tail);
    iRet=Count(Head,Tail);

    printf("\nNumber of nodes : %d\n",iRet);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head,Tail);
    iRet=Count(Head,Tail);

    printf("\nNumber of nodes : %d\n",iRet);

    return 0;
}