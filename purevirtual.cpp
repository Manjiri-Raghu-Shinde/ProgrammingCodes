#include<iostream>
using namespace std;

class Circle 
{
    public:       //access specifier
        float PI;        //characteristics
        float radius;

        Circle() //default constructor
        {
            PI=3.14;
            radius=0.0;
        } 

        Circle(float a, float b) //parametrised constructor
        {
            PI=a;
            radius=b;
        }

        void Display()  //concrete method = method with a body is known as concrete method
        {
            cout<<"value of radius :"<<radius<<"\n";
        }

        virtual float Area()=0; //abstract function(pure virtual function)
        virtual float Circumference()=0;   //abstract function
};

class Marvellous : public Circle
{
    public:
        Marvellous():Circle()
        {

        }

        Marvellous(float x, float y):Circle(x,y)
        {

        }
        float Area() //concrete method
        {
            float Ans = PI*radius*radius;
            return Ans;
        }

        float Circumference() //concrete method
        {
            float Ans=0.0;
            Ans = 2*PI*radius;
            return Ans;
        }
};
int main()
{
    Marvellous mobj;
    Marvellous mobj1(3.14,10.89);

    float fret = 0.0;
    fret = mobj1.Area();
    cout<<"Area is :"<<fret<<"\n";

    fret = mobj1.Circumference();
    cout<<"Circumference is :"<<fret<<"\n";


   return 0;
}