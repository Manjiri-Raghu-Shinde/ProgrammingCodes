
import java.util.*;


class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

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

    public int  Difference()
    {
        int Sum=0,Sum1=0;
        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
           if(Arr[iCnt]%2==0)
           {
                Sum=Sum+Arr[iCnt];
           }
           else
           {
            Sum1=Sum1+Arr[iCnt];
           }
        }
        return Sum1 - Sum;
    }
}

class Program32_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        int iRet = obj.Difference();
        System.out.println("difference is : "+iRet);
        sobj.close();
    }
}