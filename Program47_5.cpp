#include<iostream>

template<class T>
T Max(T Arr[],int iSize)
{
    int iMin=Arr[iSize];
    int iCnt=0;


    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMin)
        {
            iMin=Arr[iCnt];
        }
    
    }
    return iMin;

}

int main()
{
    int arr[]={10,20,30,40,50};
    int ret=Max(arr,5);
    printf("%d\n",ret);

    return 0;
}