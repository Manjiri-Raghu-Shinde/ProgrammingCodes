#include<iostream>
using namespace std;

class overloading
{
        public:
            //Add@2ii(name mangling)
            int Add(int a, int b)//1000
            {
                cout<<"addition of integers\n";
                return a+b;
            }
            //Add@2ff
            float Add(float a, float b)//2000
            {
                cout<<"addition of floats\n";
                return a+b;
            }
            //Add@2dd
            double Add(double a, double b)//3000
            {
                cout<<"addition of doubles\n";
                return a+b;
            }
            //Add@3iii
            int Add(int a, int b, int c)//4000
            {
                cout<<"addition of 3 integers\n";
                return a+b+c;
            }

};
int main()
{
    
    overloading obj;

    obj.Add(11,21); 
        
    obj.Add(11,21,51);
    obj.Add(10.2,20.3);

    return 0;
}