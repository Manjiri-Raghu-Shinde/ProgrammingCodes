#include<iostream>
using namespace std;

class Base 
{
    public:                //access specifier     
        int a,b;
    
    void fun()            //function definition      1000
    {
        cout<<"base fun\n";
    }

    void gun(int i)            //function definition      2000
    {
        cout<<"base gun with one integer\n";
    }

    void gun(int i, int j)       //overloaded function definition   3000
    {
        cout<<"base gun with 2 integers\n";
    }

};

class Derived : public Base
{
    public:
        int x,y;
    
    void sun()         //function definition  4000
    {
        cout<<"derived sun\n";
    }

    void fun()         // function redefinition   5000
    {
        cout<<"derived fun\n";
    }

};

int main()
{

    Derived dobj;
    dobj.fun();
    dobj.Base::fun();   //explicit calling of function
    dobj.gun(11);
    dobj.gun(11,13);
    dobj.sun();

/*
    Base bobj;
    bobj.fun();
    bobj.gun(11);
    bobj.gun(12,13);
    bobj.sun();
*/
    return 0;
}