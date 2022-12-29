#include<iostream>
using namespace std;

class Base
{
    public:
    int a,b;

};

class Derived : public Base
{
    public:
    int x,y;
};
int main()
{
    Base *bp=NULL;
    Derived *dp=NULL;
    
    Base bobj;
    Derived dobj;
    bp=&bobj;    //no casting    A
    dp=&dobj;    //no casting     A
    bp=&dobj;    //upcasting      A
    //dp=&bobj;   // downcasting  NA


    return 0;
}