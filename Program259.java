import java.util.Scanner;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    public void Accept()
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

    public void Display()
    {
        System.out.println("the elements of array:");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

}

class Program259 {
    public static void main(String ars[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the size of array:");
        int iSize=sobj.nextInt();
        ArrayX obj=new ArrayX(iSize);
        obj.Accept();
        obj.Display();
        
       sobj.close();
    }
}
