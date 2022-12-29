#include<iostream>
//using namespace std;
//cout is the object whose class is included in iostream
//namespace is not a datatype[at the end of any datatype we need to add a semi colon as in class Demo]
namespace     //unnamed namespace members are accessible only to the current file 
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

}   

int main()
{
    Demo obj;
    obj.fun();

    
    return 0;
}