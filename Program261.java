import java.util.Scanner;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length+" elements :");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println("enter the element "+(iCnt+1));
            Arr[iCnt]=sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("the elements of array:");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

}
class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public void ReverseArray()
    {
        int iStart=0;
        int iEnd=Arr.length-1;
        int Temp=0;

        while(iStart<iEnd)
        {
            Temp=Arr[iStart];
            Arr[iStart]=Arr[iEnd];
            Arr[iEnd]=Temp;

            iStart++;
            iEnd--;
        }
    }
    
}
class Program261 {
    public static void main(String ars[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the size of array:");
        int iSize=sobj.nextInt();
        MarvellousX obj=new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        obj.ReverseArray();
        System.out.println("array after reverse operation :");
        obj.Display();
        sobj.close();
    }
    
}

