/*
 * class Object
 * {
 * //code
 * }
 */
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
        this.A=10;
        this.B=20;
    }
    public void fun() //definition
    {
        System.out.println("inside base fun");
    }
    public void gun() //definition
    {
        System.out.println("inside base gun");
    }
    public void fun(int iNo)//overloaded definition
    {
        System.out.println("inside base fun with one integer");
    }

}

class Derived extends Base //class Derived::public Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived constructor");
        this.X=30;
        this.Y=40;   
    }   
    public void sun() //definition
    {
        System.out.println("inside derived sun");
    }
    public void gun() //overrided definition
    {
        System.out.println("inside derived gun");
    }
}

public class Single 
{
    public static void main(String arr[])
    {
       //Base bobj1=new Base();
       // Derived dobj1=new Derived();
       Base bobj2=new Derived();
        //Derived dobj2=new Base();
        bobj2.fun(); //base fun
        bobj2.fun(11); //base fun
        bobj2.gun(); //Base gun
        //bobj2.sun();//Derived sun


    }    
}
