#include<iostream>

template<class T>
T Min(T Arr[],int iSize)
{
    int iMax=Arr[0];
    int iCnt=0;


    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMax)
        {
            iMax=Arr[iCnt];
        }
    
    }
    return iMax;

}

int main()
{
    int arr[]={10,20,30,40,50};
    int ret=Min(arr,5);
    printf("%d\n",ret);

    return 0;
}