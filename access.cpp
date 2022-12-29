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

    void fun()
    {
        cout<<"value of public i:"<<i<<endl;
        cout<<"value of private j:"<<j<<endl;
        cout<<"value of protected k:"<<k<<endl;
    }
};

int main()
{
    cout<<"inside main\n";
    Base bobj;
    bobj.fun();
    cout<<"value of public i:"<<bobj.i<<endl;
    //cout<<"value of private j:"<<bobj.j<<endl;
    //cout<<"value of protected k:"<<bobj.k<<endl;
    
    return 0;
}