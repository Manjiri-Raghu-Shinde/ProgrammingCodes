#include<iostream>
using namespace std;
#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCircular
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCircular();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int Count();

};
DoublyCircular :: DoublyCircular()
{
    First=NULL;
    Last=NULL;
}

void DoublyCircular :: InsertLast( int no)
{
    PNODE newn = new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL)&&(Last)==NULL)
    {
        First=newn;
        Last=newn;    
    }
    else
    {
        (Last)->next=newn;
        newn->prev=Last;
        (Last)=newn;
    }
    (Last)->next=(First);
    (First)->prev=(Last);

}

void DoublyCircular :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL)&&(Last)==NULL)
    {
        First=newn;
        Last=newn;   
    }
    else
    {
        newn->next=First;
        (First)->prev=newn;
        First=newn;
    }
    (Last)->next=(First);
    (First)->prev=(Last);
}

void DoublyCircular :: DeleteFirst()
{
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if((First)==(Last))
    {
        free(First);
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=(First)->next;
        free((Last)->next);
        (Last)->next=(First);
        (First)->prev=(Last);
    }
    
}

void DoublyCircular :: DeleteLast()
{
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if((First)==(Last))
    {
        free(First);
        First=NULL;
        Last=NULL;

    }
    else
    {
        Last=(Last)->prev;
        free((First)->prev);
        (Last)->next=(First);
        (First)->prev=(Last);
    }
    
}

void DoublyCircular :: InsertAtPos(int no , int ipos)
{
    int NodeCnt=0;
    NodeCnt=Count();
    PNODE newn= new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    PNODE temp=First;
    int iCnt=0;

    if((ipos<1)||(ipos>NodeCnt+1))
    {
        cout<<"invalid position"<<"\n";
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
        temp=First;
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

void DoublyCircular :: DeleteAtPos(int ipos)
{
    int NodeCnt=0;
    NodeCnt=Count();
    PNODE temp=First;
    int iCnt=0;

    if((ipos<1)||(ipos>NodeCnt))
    {
        cout<<"invalid position"<<"\n";
        return;

    }
    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos==NodeCnt+1)
    {
        DeleteLast();
    }
    else
    {
        temp=First;
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp; 
    }
}

int DoublyCircular :: Count()
{
    int iCnt=0;
    PNODE temp=First;
    if(First==NULL && Last==NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp=temp->next;
    } while ((temp)!=(Last)->next);
    
    return iCnt;
}

void DoublyCircular :: Display()
{
    PNODE temp=First;
    if(First==NULL && Last==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp=temp->next;
    } while ((temp)!=(Last)->next);
    
}

int main()
{
    DoublyCircular obj;
    int iRet=0;

    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet=obj.Count();

    cout<<"\nNumber of nodes :"<<iRet<<"\n";

    obj.InsertLast(51);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet=obj.Count();

    cout<<"\nNumber of nodes :"<<iRet<<"\n";
    

    obj.DeleteFirst();
    obj.Display();
    iRet=obj.Count();

    cout<<"\nNumber of nodes :"<<iRet<<"\n";
    
    obj.DeleteLast();
    obj.Display();
    iRet=obj.Count();

    cout<<"\nNumber of nodes :"<<iRet<<"\n";
   

    obj.InsertAtPos(222,3);
    obj.Display();
    iRet=obj.Count();

    cout<<"\nNumber of nodes :"<<iRet<<"\n";
   
    obj.DeleteAtPos(3);
    obj.Display();
    iRet=obj.Count();

    cout<<"\nNumber of nodes :"<<iRet<<"\n";
    

    return 0;
}