class Demo{
    public int Size;
    public int Ar[];
    
    public Demo(int No)
    {
        System.out.println("inside constructor");
        Size=No;
        Ar = new int[Size];

    }

    protected void finalize()
    {
        System.out.println("inside finalize method");
        Ar=null;
    }
}

public class FinalizeDemo {

    public static void main(String A[])
    {
        Demo obj=new Demo(4);
        obj=null;
        System.gc();
    }
    
}
