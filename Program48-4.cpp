#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T Arr[],int iSize,T iNo)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           break;
        }
    
    }
    if(iCnt==-1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }  
}
int main()
{
    int arr[]={10,20,30,40,20};
    int ret=SearchFirst(arr,5,20);
    cout<<ret<<"\n";
    return 0;
}