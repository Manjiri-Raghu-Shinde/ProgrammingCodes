#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    const int j; //constant charactertics
//parametrised constuctor with DEFAULT value
    Demo(int x=10,int y=20) :j(y)
    {
        i=x;
        
    }

    void fun()
    {
        int a=10;
        const int b=20; //constant variable
        i++;  //A
        //j++;  //A
        a++;
        //b++;
    }

    void gun() const  //constant behaviour
    {
        int a=10;
        const int b=20;
        //i++;  //NA
        //j++;  //NA
        //a++;
        //b++;
    }
};

int main()
{
    Demo obj1(11,21);
    const Demo obj2(11);  //constant object
   // Demo obj3(11,21);
    //obj3.fun();
    //obj3.gun();
    obj1.fun();
    obj1.gun();
    //obj2.fun();
    obj2.gun();
    obj1.i++;
    //obj1.j++;
    //obj2.i++;
    //obj2.j++;


    return 0;
}