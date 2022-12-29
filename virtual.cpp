#include<iostream>
using namespace std;

class Base
{
    public:
    int a,b;
    void fun()
    {
        cout<<"base fun\n";
    }
    virtual void gun()
    {
        cout<<"base gun\n";
    }
    virtual void sun()
    {
        cout<<"base sub\n";
    }
};

class Derived : public Base
{
    public:
    int x,y;

    void gun()
    {
        cout<<"derived gun\n";
    }
    void run()
    {
        cout<<"derived run\n";
    }
    virtual void mun()
    {
        cout<<"derived mun\n";
    }
};
int main()
{
    //cout<<"sizeof base class "<<sizeof(Base)<<endl;
    //cout<<"size of derived class "<<sizeof(Derived)<<endl;
    Base *bp=NULL;
    Derived dobj;
    
    bp=&dobj;      //upcasting
    
    bp->fun();
    bp->gun();
    bp->sun();
    
    return 0;
}