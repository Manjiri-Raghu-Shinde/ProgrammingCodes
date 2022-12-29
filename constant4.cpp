#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j;
//parametrised constuctor with DEFAULT value
    Demo(int x=10,int y=20)
    {
        i=x;
        j=y;
    }

    void fun()
    {
        i++;  //A
        j++;  //A
    }

    void gun() const
    {
        //i++;  //NA
        //j++;  //NA
    }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);
    obj3.fun();
    obj3.gun();

    return 0;
}