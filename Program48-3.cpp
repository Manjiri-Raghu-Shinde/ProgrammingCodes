#include<iostream>
using namespace std;

template<class T>
int SearchLast(T Arr[],int iSize,T iNo)
{
    int iCnt=0;
    
    for(iCnt=iSize-1;iCnt>=0;iCnt--)
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
    int ret=SearchLast(arr,5,20);
    cout<<ret<<"\n";
    return 0;
}