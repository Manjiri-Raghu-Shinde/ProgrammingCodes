
import java.util.*;
class ArrayX
{
    public int Arr[];
    public int Arr1[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
        Arr1=new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " of first array elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of first array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
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

    public void CopyArray()
    {
       int iCnt=0;
       
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           Arr1[iCnt]=Arr[iCnt];
        }
        System.out.println("copied contents are:");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           System.out.println(Arr1[iCnt]+"\t");
        }
       
    }
}

class Program42_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();
        MarvellousX obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        obj.CopyArray();
       
        sobj.close();
    }
}







