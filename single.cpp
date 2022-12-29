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

int main()
{
    Derived * ptr = NULL;
    ptr = new Derived;
    
    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}