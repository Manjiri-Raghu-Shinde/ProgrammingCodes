#include<iostream>
using namespace std;

class Base
{
    public:
    int a,b;

    Base()
    {
        cout<<"inside base constructor\n";
    }
    ~Base()
    {
        cout<<"inside base destructor\n";
    }

    void fun()
    {
        cout<<"inside base fun\n";
    }
};

class Derived : public Base
{
    public:
    int x,y;
    
    Derived()
    {
        cout<<"inside derived constructor\n";
    }

    ~Derived()
    {
        cout<<"inside derived destructor\n";
    }

    void gun()
    {
        cout<<"inside gun of derived\n";
    }
};

class DerivedX : public Derived 
{
    public:
    int s,f;
    DerivedX()
    {
        cout<<"inside derivedx constructor\n";
    }
    ~DerivedX()
    {
        cout<<"inside derivedx destructor\n ";
    }
    void sun()
    {
        cout<<"inside sun of derivedx\n";
    }
};

int main()
{
   cout<<"size of base:"<<sizeof(Base)<<endl;
   cout<<"size of Derived:"<<sizeof(Derived)<<endl;
   cout<<"size of DerivedX:"<<sizeof(DerivedX)<<endl;

   DerivedX dobj;
   dobj.fun();
   dobj.gun();
   dobj.sun();
/*
    DerivedX * ptr = NULL;
    ptr = new DerivedX;
                                dynamic memory allocation
    ptr->fun();
    ptr->gun();
    ptr->sun();

    delete ptr;
*/ 
    return 0;
}