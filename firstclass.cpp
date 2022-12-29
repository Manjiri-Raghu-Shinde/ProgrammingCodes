#include<iostream>

using namespace std;
//class declaration
class Maths
{
    public://access specifier
        int ino1;//charactertics
        int ino2;//charactertics

    Maths() //constructor(default)
    {
        cout<<"inside default constructor\n";
        ino1=0;
        ino2=0;
    }
    Maths(int A,int B)//constructor(parameterised)
    {
         cout<<"inside parametrised constructor\n";
        ino1=A;
        ino2=B;

    }
    ~Maths()
    {

        //destructor
        cout<<"program ends\n";
    }
    //int Addition(Maths *this)
    int Addition()//behaviour
    {
        return ino1+ino2;
    }
    // int Subtraction(Maths *this)
    int Substraction()//behaviour
    {
        return ino1-ino2;
    }
};
int main()
{

    Maths mobj1;
    Maths mobj2(11,10);

    int ret = 0;

    ret = mobj2.Addition();//ret = Addition(&mobj2)
    //ret = Addition(200)
    cout<<"addition is :"<<ret<<"\n";//ret = Substraction(&mobj1)
    //ret = Substraction(100)

    ret = mobj1.Addition();
    cout<<"addition is :"<<ret<<"\n";

    return 0;
}