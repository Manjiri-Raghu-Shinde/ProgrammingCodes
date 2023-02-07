
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

    public int FirstOcc(int iNo)
    {
       int iCnt=0;
        for(iCnt=0; iCnt < Arr.length; iCnt++)
        {
           if(Arr[iCnt]==iNo)
           {
                System.out.println(iCnt);
                break;
           }
           
        }

        return iCnt;
    }
}

class Program34_2
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();
        System.out.println("enter a number :");
        int iNo=sobj.nextInt();
        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        int iRet=obj.FirstOcc(iNo);
        System.out.println("the first occurence is "+iRet);
        sobj.close();
    }
}


