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
            Arr=new int[iSize];
        }

        void Accept()
        {
            cout<<"plz enter number:"<<endl;
            int iCnt=0;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"elements of array are:"<<endl;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            } 
            cout<<"\n";
        }

        void Function()
        {

        }

        ~ArrayX()
        {
            free(Arr);
        }
};

int main()
{
    int iLength=0;
    cout<<"enter number of elements:"<<endl;
    cin>>iLength;

    ArrayX obj(iLength);
    obj.Accept();
    obj.Display();
    obj.Function();
    return 0;
}