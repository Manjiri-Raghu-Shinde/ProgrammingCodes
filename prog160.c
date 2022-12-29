//Circular LL
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

void InsertFirst(PPNODE First,PPNODE Last,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if((*First==NULL)&&(*Last==NULL))   //LL is empty
    {
        *First=*Last=newn;
        (*Last)->next=*First;
    }
    else
    {
        newn->next=*First;
        *First=newn;
        (*Last)->next=*First;
    }
}

void InsertLast(PPNODE First,PPNODE Last,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if((*First==NULL)&&(*Last==NULL))   //LL is empty
    {
        *First=*Last=newn;
        (*Last)->next=*First;
    }
    else
    {
        (*Last)->next=newn;
        *Last=newn;
        (*Last)->next=*First;
    }
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        (*First)=(*First)->next;
        free((*Last)->next);
        (*Last)->next=*First;
    }

}

void DeleteLast(PPNODE First,PPNODE Last)
{
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        
    }
}


void InsertAtPos(PPNODE First,PPNODE Last,int no,int ipos)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    PNODE temp=*First;
    int iCount=0;
    iCount=Count(First,Last);
    int iCnt=0;
    
    if(ipos==1)
    {
        InsertFirst(First,Last,no);
    }
    else if(ipos==iCount+1)
    {
        InsertLast(First,Last,no);

    }
    else
    {
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int ipos)
{
    int iCount=Count(First,Last);
    if(ipos==1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos==iCount+1)
    {
        DeleteLast(First,Last);

    }
    else
    {
        
    }
}
void Display(PNODE First,PNODE Last)
{
    printf("elements of: \n");
    do
    {
      printf("| %d | -> ",First->data);
      First=First->next; 
    } while (First != Last->next);
    
}

int Count(PNODE First,PNODE Last)
{
    int iCnt=0;
    printf("elements of: \n");
    do
    {
      iCnt++;
      First=First->next; 
    } while (First != Last->next);
    return iCnt;
}

int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;
    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,31);

    InsertLast(&Head,&Tail,61);
    InsertLast(&Head,&Tail,11);

    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("the count is %d\n",iRet);

    InsertAtPos(&Head,&Tail,34,3);
    Display(Head,Tail);
    return 0;
}