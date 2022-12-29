#include<iostream>
using namespace std;
class Marvellous
{
    public:
        void fun(); //naked function 
        void gun();       
};
class Demo
{
    public:
        int i;

    private:
        int j;

    protected:
        int k;

    public:

        Demo()
        {
            i=10;
            j=20;
            k=30;
        }
        friend void Marvellous::fun();
        friend void Marvellous::gun();
};

void Marvellous::fun() //naked function
{
   Demo obj;
   cout<<"value of i:"<<obj.i<<endl;
   cout<<"value of j:"<<obj.j<<endl;
   cout<<"value of k:"<<obj.k<<endl;
}  
void Marvellous::gun() //naked function
{
   Demo obj;
   cout<<"value of i:"<<obj.i<<endl;
   cout<<"value of j:"<<obj.j<<endl;
   cout<<"value of k:"<<obj.k<<endl;
}    
         
int main()  //naked function
{
    Marvellous mobj;
    mobj.fun();
    mobj.gun();
    
    return 0;
}