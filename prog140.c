#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
//total size of structure is 20 (4+8+87)
struct node 
{
    int data;
    struct node *next;
    struct node *prev;   //x
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int no)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));
   newn->data=no;
   newn->next=NULL;
   newn->prev=NULL; //x

   //two conditions if linked is empty and linked list contains atleast one node
   if(*First==NULL)
   {
        *First=newn;
   } 
   else
   {
        (*First)->prev=newn;    //x
        newn->next=*First;
        *First=newn;  //head la new node cha address bhetnar
   }
}

void InsertLast(PPNODE First , int no)
{
    PNODE newn = NULL;
    PNODE temp=*First;
   newn = (PNODE)malloc(sizeof(NODE));
   newn->data=no;
   newn->next=NULL;
   newn->prev=NULL; //x

   //two conditions if linked is empty and linked list contains atleast one node
   if(*First==NULL)
   {
        *First=newn;
   } 
   else
   {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;    //x
   }

}

void DeleteFirst(PPNODE First)
{
   
    //linked list is empty
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next==NULL)   //linked contains one node
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        (*First)=(*First)->next;
        free((*First)->prev);   //x
        (*First)->prev=NULL;    //x
    }

}

void DeleteLast(PPNODE First)
{
    PNODE temp=NULL;
    temp=*First;
    //linked list is empty
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next==NULL)   //linked contains one node
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
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
        newn->prev=NULL;    //x
        temp=*First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
        
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
        temp2->next->prev=temp1;

        free(temp2);
        

    }

}

void Display(PNODE First)
{
    printf("elements from the linked last are:\n");

    while(First!=NULL)
    {
        printf("| %d |-> ",First->data);
        First=First->next;
    }
    printf("NULL \n");

}

int Count(PNODE First)
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
    PNODE Head = NULL;
    int iRet=0;
    InsertFirst(&Head,11);
    InsertFirst(&Head,21);

    Display(Head);
    iRet=Count(Head);
    printf("the count of nodes is : %d\n",iRet);
    
    InsertLast(&Head,31);

    Display(Head);
    iRet=Count(Head);
    printf("the count of nodes is : %d\n",iRet);
    
    DeleteFirst(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("the count of nodes is : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("the count of nodes is : %d\n",iRet);

    InsertAtPos(&Head,102,2);
    Display(Head);
    iRet=Count(Head);
    printf("the count of nodes is : %d\n",iRet);

    DeleteAtPos(&Head,105,2);
    Display(Head);
    iRet=Count(Head);
    printf("the count of nodes is : %d\n",iRet);


    return 0;
}