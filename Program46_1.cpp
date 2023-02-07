#include<iostream>
using namespace std;

class Array
{
    protected: 
    int *Arr;
    int size;

    public:
    Array(int value=10)
    {
        cout<<"inside constructor\n";
        this->size=value;
        this->Arr=new int[size];
    }

    Array(Array &ref)
    {
        cout<<"inside copy constructor\n";
        this->size=ref.size;
        this->Arr=new int[this->size];

        for(int i=0;i<size;i++)
        {
            this->Arr[i]=ref.Arr[i];
        }
    }

    ~Array()
    {
        cout<<"inside destructor\n";
        delete []Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout<<"please enter the values\n";
    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"elements are:\n";
    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";

    }
    cout<<"\n";
}

class ArrSearch:public Array
{
    public:
    ArrSearch(int no=10):Array(no){}
    int Frequency(int);
    int SearchLast(int);
    int SearchFirst(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::SearchFirst(int Value)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]==Value)
        {
            break;
        }
    }

    if(i==size)
    {
        return -1;
    }
    else{
        return i+1;
    }
}

int ArrSearch::Frequency(int value)
{
    int iCnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int ArrSearch::SearchLast(int value)
{
    int i=0;
    for(i=size;i<0;i--)
    {
        if(Arr[i]==value)
        {
            break;
        }

        if(i==0)
        {
            return -1;
        }
        else
        {
            return i-1;
        }

    }

}

int ArrSearch::EvenCount()
{
    int iCnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]%2==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::OddCount()
{
    int iCnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]%2!=0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SumAll()
{
    int iSum=0;
    for(int i=0;i<size;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    cout<<"inseide main\n";
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret=sobj1.Frequency(11);
    cout<<"frequency is "<<iret<<"\n";

    iret=sobj1.SearchFirst(11);
    cout<<"First Occurence is "<<iret<<"\n";

    iret=sobj1.SearchLast(11);
    cout<<"Last Occurence is "<<iret<<"\n";

    iret=sobj1.EvenCount();
    cout<<"Count of even number is "<<iret<<"\n";

    iret=sobj1.OddCount();
    cout<<"Count of Odd number is "<<iret<<"\n";

    iret=sobj1.SumAll();
    cout<<"Sum is "<<iret<<"\n";

    return 0;
}