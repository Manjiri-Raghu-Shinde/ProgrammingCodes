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

void InsertLast(PPNODE First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 allocate memory
    PNODE temp = *First;
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)//if linked list is empty
    {
        *First = newn;
    }
    else//if linked list contains at least one node
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }   
        temp->next=newn;
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

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
    if(*First==NULL)//empty linked list
    {
        return;
    }
    else if ((*First)->next==NULL)//one node in linked list
    {
        free(*First);
        *First=NULL;
    }
    else //more than one node in linked list
    {
        (*First)=(*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp=*First;

    if(*First==NULL)//empty linked list
    {
        return;
    }
    else if ((*First)->next==NULL)//one node in linked list
    {
        free(*First);
        *First=NULL;
    }
    else //more than one node in linked list
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}

void InsertAtPos(PPNODE First , int no ,int ipos)
{
    int NodeCnt=0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    NodeCnt=Count(*First);
    int iCnt=0;

    if((ipos<1)||(ipos>(NodeCnt+1)))//filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos==1)
    {
        InsertFirst(First,no);
    }
    else if(ipos==(NodeCnt+1))
    {
        InsertLast(First,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        temp=*First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        
    }

}

void DeleteAtPos(PPNODE First , int no , int ipos)
{
    int NodeCnt=0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt=0;
    NodeCnt=Count(*First);
    temp1=*First;

    if((ipos<1)||(ipos>(NodeCnt+1)))//filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos==1)
    {
        DeleteFirst(First);
    }
    else if(ipos==(NodeCnt+1))
    {
        DeleteLast(First);
    }
    else
    {
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp1=temp1->next;
        }
        
        temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
        

    }

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

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
    
    Display(Head);
    
    iRet=Count(Head);
    printf("number of nodes : %d\n",iRet);

    InsertAtPos(&Head,105,5);
    Display(Head);

    iRet=Count(Head);
    printf("number of nodes : %d\n",iRet);
    DeleteAtPos(&Head,105,5);
    Display(Head);

    DeleteFirst(&Head);
    Display(Head);

    iRet=Count(Head);
    printf("number of nodes : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);

    iRet=Count(Head);
    printf("number of nodes : %d\n",iRet);

    

    return 0;
}