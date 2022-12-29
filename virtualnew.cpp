#include<iostream>
using namespace std;

class Base
{
    public:
    int a,b;
    
    void fun() //1000
    {
        cout<<"base fun\n";
    }
    
    virtual void gun() //2000
    {
        cout<<"base gun\n";
    }
    
    virtual void sun() //3000
    {
        cout<<"base sub\n";
    }
    
    virtual void run() //4000
    {
        cout<<"base run\n";
    }
};

class Derived : public Base
{
    public:
    int x,y;

    void gun() //5000
    {
        cout<<"derived gun\n";
    }

    virtual void run() //6000
    {
        cout<<"derived run\n";
    }

    virtual void mun() //7000
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
    //Base *bp=new Derived; //dynamic memory allocation 
    
    bp=&dobj;  //upcasting
   
    
    bp->fun(); //base fun
    bp->gun(); //derived gun
    bp->sun(); //base sun
    bp->run(); //derived run
    //bp->mun(); //error
    
    return 0;
}