#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize=i;
            Arr = new int[iSize];   //resource alloaction
        }

        ~ArrayX()
        {
            delete []Arr;   //resource deallocation
        }

        void Accept()
        {
            cout<<"enter the elements of array :"<<"\n";
            for(int iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"elements of array are: "<<"\n";
            for(int iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iValue=0;
    cout<<"enter number of elements of array : "<<"\n";
    cin>>iValue;

    ArrayX obj(iValue);
    obj.Accept();
    obj.Display();


    return 0;
}