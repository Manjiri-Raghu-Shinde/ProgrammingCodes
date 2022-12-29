#include<iostream>
using namespace std;

class Numbers
{
    public:
    int iNo;

    Numbers(int i)
    {
        iNo=i;
    }   

    void Function()
    {

    }

};

int main()
{
    int iValue=0;
    cout<<"enter number:\n";
    cin>>iValue;   

    Numbers obj(iValue);

    obj.Function();
    
    return 0;
}