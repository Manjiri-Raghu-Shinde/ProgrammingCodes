#include<iostream>
using namespace std;

class Array
{
    public:
    int iSize; //variable
    int *Arr;  //pointer

    Array(int iLength)
    {
        cout<<"inside constructor\n";
        iSize=iLength;  //allocated charactertics
        Arr=new int[iSize];  //it is a outside memory which is allocated to the array using constructor this is known as a resource
    }
    ~Array()
    {
        cout<<"inside destructor\n";
        delete []Arr;
    }
    void Accept()
    {
        cout<<"enter the values\n";
        int i=0;
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        cout<<"elements of array:\n";
        int i=0;
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }
    int Summation()
    {
        int iSum=0,i=0;
        for(i=0;i<iSize;i++)
        {
            iSum=iSum+Arr[i];

        }
        return iSum;
    }
};
int main()
{
    cout<<"inside main\n";
    int iRet=0;
    Array obj1(4);
    //Array obj2(6);
    obj1.Accept();
    obj1.Display();
    iRet=obj1.Summation();
    cout<<"Summation of all elements:"<<iRet<<endl;
    return 0;
}
