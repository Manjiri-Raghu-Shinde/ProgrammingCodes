#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class doublyCL
{
    public:
        PNODE First;
        PNODE Last;

        doublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

doublyCL::doublyCL()
{
    First=NULL;
    Last=NULL;
}
void doublyCL:: InsertFirst(int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;


    if((First)==NULL && (Last)==NULL)
    {
        First=Last=newn;
        newn->next=newn->prev=First;
    }
    else
    {
        newn->next=First;
        newn->prev=Last;
        First=newn;
        (Last)->next=First;
    }
}

void doublyCL:: InsertLast(int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;


    if((First)==NULL && (Last)==NULL)
    {
        First=Last=newn;
        newn->next=newn->prev=First;
    }
    else
    {
        newn->prev=Last;
        newn->next=First;
        Last=(Last)->next=(First)->prev=newn;
        (Last)->next=First;
    }
}

void doublyCL:: DeleteFirst()
{
    PNODE temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    {
        free(First);
        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        First = (First)->next;
        (First)->prev=Last;
        free(temp);
        (Last) ->next = First;
    }
}

void doublyCL:: DeleteLast()
{
    PNODE temp = Last;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    {
        free(First);
        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        Last=(Last)->prev;
        (First)->prev=Last;
        (Last)->next=First;
        free(temp);
    }
}

void doublyCL:: InsertAtPos(int no, int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;      // X

        temp = First;

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

void doublyCL:: DeleteAtPos(int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0, NodeCnt = 0;
    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;
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

void doublyCL:: Display()
{
    printf("Elements of Linked list are : \n");
    PNODE temp = First;
    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }while(temp!= Last->next);
    printf("\n");
}

int doublyCL:: Count()
{
    int iCnt = 0;
    PNODE temp = First;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}

int main()
{
    doublyCL obj;
    int iRet = 0;

    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertLast(31);
    obj.Display();

    iRet=obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();

    iRet=obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();

    iRet=obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertLast(31);

    obj.InsertAtPos(33,4);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    obj.DeleteAtPos(4);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    return 0;
}