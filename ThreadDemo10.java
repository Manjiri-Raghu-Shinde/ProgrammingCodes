import java.util.Scanner;

class Data
{
    public int Arr[];
    public Data(int size)//constructor parametrized
    {
        Arr=new int[size];
    }

    protected void finalize()
    {
        Arr=null;
    }
    public void Accept()//method taking input from user
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter number");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
     
        }

        sobj.close();
    }

}

class DemoEven extends Thread
{
    public Data dobj;
    public DemoEven(Data obj)
    {
        dobj=obj;
    }
    public void run()
    {
        for(int i=0;i<dobj.Arr.length;i++)
        {
            if(dobj.Arr[i]%2==0)
            {
                System.out.println("even number is :"+dobj.Arr[i]);
            }
        }
    }
}

class DemoOdd extends Thread
{
    public Data dobj;
    public DemoOdd(Data obj)
    {
        dobj=obj;
    }
    public void run()
    {
        for(int i=0;i<dobj.Arr.length;i++)
        {
            if(dobj.Arr[i]%2!=0)
            {
                System.out.println("odd number is :"+dobj.Arr[i]);
            }
        }
    }
}

public class ThreadDemo10 {
    public static void main(String A[]) throws InterruptedException
    {
        Data obj1=new Data(10);
        obj1.Accept();

        DemoEven eobj=new DemoEven(obj1);
        DemoOdd oobj=new DemoOdd(obj1);

        Thread t1=new Thread(eobj);
        Thread t2=new Thread(oobj);

        t1.setName("Evennumber");
        t2.setName("Oddnumber");

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        

    }
    
}
