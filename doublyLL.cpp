#include<iostream>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      // X
};

typedef struct node NODE;
typedef struct node * PNODE;


class DoublyLL
{
    public:
        PNODE First;

        DoublyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int ipos,int no);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int Count();

};

DoublyLL :: DoublyLL()
{
    First=NULL;
}
void DoublyLL :: InsertFirst(int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        (First)->prev = newn;  // X

        First = newn;
    }
}

void DoublyLL :: InsertLast(int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;      // X
    }
}

void DoublyLL :: Display()
{
    printf("Elements of Linked list are\n");

    printf("NULL<=> ");

    while(First != NULL)
    {
        printf("| %d |<=> ",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int DoublyLL :: Count()
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }

    return iCnt;
}

void DoublyLL :: DeleteFirst()
{
    if(First == NULL)  // LL is empty
    {
        return;
    }
    else if((First)->next == NULL) // LL contains 1 node
    {
        free(First);
        First = NULL;
    }
    else    // LL contains more than 1 node
    {
        First = (First) -> next;
        free((First)->prev);               // X
        (First)->prev = NULL;              // X
    }
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = First;

    if(First == NULL)  // LL is empty
    {
        return;
    }
    else if((First)->next == NULL) // LL contains 1 node
    {
        free(First);
        First = NULL;
    }
    else    // LL contains more than 1 node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}


void DoublyLL :: InsertAtPos(int no, int ipos)
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

void DoublyLL :: DeleteAtPos(int ipos)
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

int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.Display();

    obj.InsertFirst(21);
    obj.Display();

    obj.InsertFirst(11);
    obj.Display();

    obj.InsertLast(101);
    obj.Display();

    obj.InsertLast(111);
    obj.Display();

    obj.InsertLast(121);
    obj.Display();

    iRet = obj.Count();
    printf("Number of elelemnts are : %d\n",iRet);

    obj.InsertAtPos(105,5);
    obj.Display();

    obj.DeleteAtPos(5);
    obj.Display();

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    printf("Number of elelemnts are : %d\n",iRet);
    
    return 0;
}