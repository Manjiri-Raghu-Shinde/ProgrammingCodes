#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr,int size,T no)
{
    int i=0;
    for(int iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt]==no)
        {
            i++;
        }
    }

    return i;
}
int main()
{
    int arr[]={10,2,10,30,10};
    int ret=Frequency(arr,5,10);
    cout<<ret<<"\n";
    return 0;
}