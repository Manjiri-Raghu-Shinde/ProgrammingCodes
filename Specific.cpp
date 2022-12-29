#include<iostream>
using namespace std;

int Addi(int i,int j)
{
    int ans=0;
    ans=i+j;
    return ans;
}

float Addf(float i,float j)
{
    float ans=0;
    ans=i+j;
    return ans;
}
int main()
{
    int a=10,b=11,iret=0;
    float x=90.1f,y=67.0f,fret=0.0f;
    iret=Addi(a,b);
    fret=Addf(x,y);
    cout<<"addition of integers:"<<iret<<"\n";
    cout<<"addition of floatss:"<<fret<<"\n";


    return 0;
}