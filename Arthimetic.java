class Maths
{
    public int i;
    public int j;

    public Maths()
    {
        System.out.println("inside default constructor");
        i=0;
        j=0;
    }
    public Maths(int a , int b)
    {
        System.out.println("inside parametised constuctor");
        i=a;
        j=b;
    }

    public int addition()
    {
        int iAns = 0;
        iAns = i+j;
        return iAns;
    }
    public int substraction()
    {
        int iAns = 0;
        iAns = i-j;
        return iAns;
    }
}//end of maths class


class Arthimetic
{
    public static void main (String ars[])
    {
        System.out.println("inside main function");
        int iRet = 0;
        Maths mobj = new Maths();
        Maths mobj1 = new Maths(10,20);
        iRet=mobj.addition();
        System.out.println("the value of addition is :"+iRet);
        iRet=mobj1.addition();
        System.out.println("the value of addition is :"+iRet);
    }
}