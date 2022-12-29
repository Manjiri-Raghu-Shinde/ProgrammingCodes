#include<iostream>
//using namespace std;
//cout is the object whose class is included in iostream
//namespace is not a datatype[at the end of any datatype we need to add a semi colon as in class Demo]
namespace Marvellous
{
    class Demo
    {
        public:
        int i,j;

        void fun()
        {
            std::cout<<"inside fun\n";
        }
    };

    class Hello
    {
        public:
        int x,y;
        void gun()
        {
            std::cout<<"inside gun\n";
        }
    };
}
namespace Infosystems
{
    class Demo
    {
        public:
        int a,b;

        void fun()
        {
            std::cout<<"inside fun of Demo from Marvellous";
        }
    };
}
int main()
{
    Marvellous::Demo obj1;   //scope resolution operator suggests the word 'cha'[Marvellous cha Demo]
    obj1.fun();
    Infosystems::Demo obj2; //better syntax
    obj2.fun();

    using namespace Marvellous;
    Hello hobj;
    hobj.gun();
    Demo obj3;
    return 0;
}