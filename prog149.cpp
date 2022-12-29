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

        int EvenSum()
        {
            int iCnt=0,iSum=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if(Arr[iCnt]%2==0)
                {
                    iSum=iSum+Arr[iCnt];
                }
            } 

            return iSum;
            
        }

        int OddSum()
        {
            int iCnt=0,iSum=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if(Arr[iCnt]%2!=0)
                {
                    iSum=iSum+Arr[iCnt];
                }
            } 

            return iSum;
            
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    int iLength=0,iRet=0;
    cout<<"enter number of elements:"<<endl;
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();

    obj.Display();

    iRet=obj.EvenSum();
    cout<<"sum of even elements are : "<<iRet<<endl;

    iRet=obj.OddSum();
    cout<<"sum of odd elements are : "<<iRet<<endl;

    return 0;
}