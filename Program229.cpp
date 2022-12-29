#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();

};

SinglyCL :: SinglyCL()
{
    First=NULL;
    Last=NULL;
}

void SinglyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

void SinglyCL :: InsertLast(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        (Last) -> next = newn;
        Last = newn;
        (Last)->next = First;
    }
}

void SinglyCL :: Display()
{
    PNODE temp=First;
    cout<<"Elements of Linked list are :"<<" \n";

    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;

    }while(temp != Last->next);

    cout<<"\n";
}

int SinglyCL :: Count()
{
    PNODE temp = First;
    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}

void SinglyCL :: DeleteFirst()
{
    PNODE temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        First = (First)->next;
        delete temp;
        (Last) ->next = First;
    }
}

void SinglyCL ::  DeleteLast()
{
    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        PNODE temp=First;
        while(temp->next!=(Last))
        {
            temp=temp->next;
        }
        delete temp->next;
        Last=temp;
        (Last)->next=(First);
    }
}

void SinglyCL :: InsertAtPos(int no,int ipos)
{
    int NodeCnt=0;
    NodeCnt=Count();
    int iCnt=0;
    PNODE temp=First;
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((ipos<1)||(ipos>NodeCnt+1))
    {
        cout<<"Invalid position";
        return;
    }
    if(ipos==1)
    {
        InsertFirst(no);
    }
    else if(ipos==NodeCnt+1)
    {
        InsertLast(no);    
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

void SinglyCL :: DeleteAtPos(int ipos)
{
    int NodeCnt=0;
    NodeCnt=Count();
    int iCnt=0;
    PNODE temp=First;
    PNODE temp1=NULL;
    if((ipos<1)||(ipos>NodeCnt+1))
    {
        cout<<"Invalid position";
        return;
    }
    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos==NodeCnt)
    {
        DeleteLast();    
    }
    else
    {
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        delete temp1;
    }

}

int main()
{
    SinglyCL obj;
    int iRet = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are :"<<iRet<<"\n";
    obj.DeleteFirst();
    obj.Display();
    obj.DeleteLast();
    obj.Display();
    obj.InsertAtPos(37,3);
    obj.Display();
    obj.DeleteAtPos(3);
    obj.Display();


    return 0;
}
