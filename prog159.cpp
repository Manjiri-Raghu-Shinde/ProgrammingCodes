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

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();

};

/*
Return_Value Class_Name::Funtion_Name(Parameters)
{

}
*/

SinglyLL::SinglyLL()
{
    First=NULL;
    iCount=0;
}

void SinglyLL::InsertFirst(int no)
{
    //Step 1:Allocate memory for node
    PNODE newn=new NODE;

    //Step 2:Initialize node
    newn->data=no;
    newn->next=NULL;

    //Step 3:Check if LL is empty or not
    if(First==NULL) //if(iCount==0)
    {
        First=newn;
        iCount++;
    }
    else
    {

    }
}

void SinglyLL:: InsertLast(int no)
{
    //Step 1:Allocate memory for node
    PNODE newn=new NODE;

    //Step 2:Initialize node
    newn->data=no;
    newn->next=NULL;

    //Step 3:Check if LL is empty or not
    if(First==NULL)
    {
        First=newn;
        iCount++;
    }
    else
    {
        newn->next=First;
        First=newn;
        iCount++;
    }

}

void SinglyLL::InsertAtPos(int no,int ipos)
{

}

void SinglyLL::DeleteFirst()
{

}

void SinglyLL::DeleteLast()
{

}

void SinglyLL::DeleteAtPos(int ipos)
{

}

void SinglyLL::Display()
{
    cout<<"elements of LL are :"<<"\n";
    PNODE temp=First;
    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp=temp->next;

    }
    cout<<"NULL"<<"\n";
}


int main()
{
    SinglyLL obj1;
    cout<<sizeof(obj1)<<endl;
    cout<<"First pointer contains :"<<obj1.First<<endl;
    cout<<"Number of nodes :"<<obj1.iCount<<endl;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Number of nodes :"<<obj1.iCount<<endl;
/*
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();
    cout<<"Number of nodes :"<<obj1.iCount<<endl;
*/
    return 0;
}