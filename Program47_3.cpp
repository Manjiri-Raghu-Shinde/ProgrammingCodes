#include<iostream>
using namespace std;

template<class T>
T Addition(T *arr,int iSize)
{
    T Sum;
    int i=0;
    for(i=0;i<iSize;i++)
    {
        Sum=Sum+arr[i];
    }

    return Sum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,7.9,8.7};
    int iSum=Addition(arr,5);
    printf("%d",iSum);
    float fSum=Addition(brr,4);
    printf("%f",fSum);
    return 0;
}