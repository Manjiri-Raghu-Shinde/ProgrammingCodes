#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;//4
        int j;//4
        static int k;//4(static)

        Demo()
        {
            i = 0;
            j = 0;
        }
        Demo(int a, int b)
        {
            i = a;
            j = b;
        }

};
int Demo::k = 0;//should be specified outside class and before int main() function
int main()
{
    cout<<"value of k:"<<Demo::k<<"\n";
    Demo obj1(10,11);
    Demo obj2(20,21);
    
    cout<<"value of i in obj1:"<<obj1.i<<"\n";
    cout<<"value of i in obj2:"<<obj2.i<<"\n";
    
    cout<<"value of j in obj1:"<<obj1.j<<"\n";
    cout<<"value of j in obj2:"<<obj2.j<<"\n";
    
    return 0;
}
//size of object is summation of sizes of its non static charactertics
//sizeof(obj)=sizeof(i)+sizeof(j)
//sizeof(obj)=8