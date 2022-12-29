#include<iostream>
using namespace std;
class Array
{
    public:
    int *Arr;
    int Size;

    Array(int length)
    {
        Size=length;
        Arr=new int[Size];
    }

    void Accept()
    {
        cout<<"enter the values:\n";
        for(int i=0;i<Size;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        cout<<"the values:\n";
        for(int i=0;i<Size;i++)
        {
            cout<<Arr[i]<<endl;
        }

    }
};
int main()
{
    Array obj1(5);

    obj1.Accept();
    obj1.Display();

    return 0;
}