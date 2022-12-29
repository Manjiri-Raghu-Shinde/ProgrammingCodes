class StaticDemo 
{
    static{
        System.out.println("inside static nlock inside main");
    }
    public StaticDemo()
    {
        System.out.println("inside constructor of staticdemo");
    }
    public static void main (String arg[])
    {
        System.out.println("inside main");
        System.out.println("Value of NO3:"+Demo.No3);  //Demo
        System.out.println("Value of NO4:"+Demo.No4);

       Demo.gun();  //Demo::gun();

       Demo obj1 = new Demo();
       Demo obj2 = new Demo();
       obj1.Fun();
       
    }
    
}
class Demo
{
    public int No1;  //nonstatic characteristics
    public int No2;  //nonstatic characteristics
    public static int No3;  //static characteristics
    public static int No4;  //static characteristics

    public Demo ()
    {
        System.out.println("inside constructor");
        No1 = 11;
        No2 = 21;
    }
    static  //static gets executed immediately after class loader loads the .class file
    {
        System.out.println("inside static block");
        No3 = 51;
        No4 = 101;
    }
    public void Fun()
    {
        System.out.println("inside nonstatoc method fun");
        System.out.println("value of No1:"+this.No1);
        System.out.println("value of No2:"+this.No2);
        System.out.println("value of No3:"+this.No3);
        System.out.println("value of No4:"+this.No4);
    }
    public static void gun()  
    {
        System.out.println("inside static method gun");
        //System.out.println("value of No1:"+No1);
        //System.out.println("value of No2:"+No2);
        System.out.println("value of No3:"+No3);
        System.out.println("value of No4:"+No4);
    }

}
