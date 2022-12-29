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

class MarvellousLB : public ArrayX
{
    public:
        MarvellousLB(int i) : ArrayX(i)
        {
            //Base member initialization
        }
        int Minimum()
            {
                int iMin = Arr[0];

                for(int iCnt=0;iCnt<iSize;iCnt++)
                {
                    if(Arr[iCnt]<iMin)
                    {
                        iMin=Arr[iCnt];
                    }
                }

                return iMin;

            }
};

int main()
{
    int iValue=0,iRet=0;
    
    cout<<"enter number of elements of array : "<<"\n";
    cin>>iValue;

    MarvellousLB *obj = new MarvellousLB(iValue);
    
    obj->Accept();
    obj->Display();
    
    iRet=obj->Minimum();
    cout<<"Minimum value is : "<<iRet<<"\n";

    delete obj;

    return 0;
}