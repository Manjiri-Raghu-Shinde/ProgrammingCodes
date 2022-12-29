#include<iostream>
using namespace std;
class Base1
{
    public:
    int a;

    Base1()
    {
        cout<<"inside base1 construntor\n";
    }
    ~Base1()
    {
        cout<<"inside base2 destructor\n";
    }
    void fun()
    {
        cout<<"inside base 1 fun function\n";
    }
};

class Base2
{
    public:
    int x,t,y;
    Base2()
    {
        cout<<"inside base2 constructor\n";

    }
    ~Base2()
    {
        cout<<"inside base2 destructor\n";
    }
    void gun()
    {
        cout<<"inside base2 gun function\n";
    }


};

class Derived : public Base2 ,public  Base1
{
    public:
    int q,r;
    Derived()
    {
        cout<<"inside derived constructor\n";
    }
    ~Derived()
    {
        cout<<"inside Derived destructor\n";
    }
    void sun()
    {
        cout<<"sun function\n";
    }
};
int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}