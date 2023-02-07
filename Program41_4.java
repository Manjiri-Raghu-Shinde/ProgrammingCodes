
import java.util.*;
class ArrayX
{
    public int Arr[];
    public int Arr1[];
    public int Arr2[];

    public ArrayX(int iSize,int iSize1,int iSize2)
    {
        Arr = new int[iSize];
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
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

        System.out.println("Please enter "+Arr1.length + " of second array elements ");
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr1[iCnt] = sobj.nextInt();
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
        System.out.println("Elements of second array are : ");

        for(int iCnt =0; iCnt < Arr1.length; iCnt++)
        {
            System.out.print(Arr1[iCnt]+"\t");
        }

        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize,int iSize1,int iSize2)
    {
        super(iSize,iSize1,iSize2);
    }

    public void SumArray()
    {
       int iCnt=0;
       int temp=0;
       int iCnt1=0;
       System.out.println("copied contents re:");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           Arr2[iCnt]=Arr[iCnt];
           System.out.print(Arr2[iCnt]+"\t");
           temp=iCnt;
        }
        for(iCnt=temp;iCnt<Arr2.length;iCnt++)
        {
            Arr2[iCnt]=Arr1[iCnt1];
            System.out.print(Arr2[iCnt]+"\t");
            iCnt1++;
        }
        
      
    }
}

class Program41_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();
        System.out.println("Enter the size of second array that you want to create ");
        int iSize1 = sobj.nextInt();
        int iSize2=iSize+iSize1;
        MarvellousX obj = new MarvellousX(iSize,iSize1,iSize2);
        obj.Accept();
        obj.Display();
        obj.SumArray();
        sobj.close();
    }
}






