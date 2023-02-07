#include<iostream>
using namespace std;

template<class T>
void Display(T Value,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}
int main()
{
    Display('B',5);
    Display(1,2);
    return 0;
}