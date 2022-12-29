#include<iostream>

using namespace std;

class Base 
{
    public :
        int i;
    private :
        int j;
    protected : 
        int k;
    public : 

    Base()
    {
        i=10;
        j=20;
        k=30;
    }
};

class Derived : public Base
{
    public:
        void fun()
        {
            cout<<"value of public i:"<<i<<endl;
           // cout<<"value of private j:"<<j<<endl;
            cout<<"value of protected k:"<<k<<endl;
        }
};

int main()
{
    cout<<"inside main\n";
    Derived dobj;
    dobj.fun();
    //cout<<"value of public i:"<<dobj.i<<endl;
    //cout<<"value of private j:"<<bobj.j<<endl;
    //cout<<"value of protected k:"<<dobj.k<<endl;

    return 0;
}