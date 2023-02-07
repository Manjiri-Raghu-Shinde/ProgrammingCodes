
import java.util.*;
class ArrayX
{
    public int Arr[];
    public int Arr1[];

    public ArrayX(int iSize,int iSize1)
    {
        Arr = new int[iSize];
        Arr1=new int[iSize1];
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
    public MarvellousX(int iSize,int iSize1)
    {
        super(iSize,iSize1);
    }

    public int DiffArray()
    {
       int iCnt=0;
       int iSum=0,iSum1=0;;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           iSum=iSum+Arr[iCnt];
        }
        for(iCnt=0;iCnt<Arr1.length;iCnt++)
        {
           iSum1=iSum1+Arr1[iCnt];
        }
       
        return iSum-iSum1;
    }
}

class Program42_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();
        System.out.println("Enter the size of second array that you want to create ");
        int iSize1 = sobj.nextInt();
        MarvellousX obj = new MarvellousX(iSize,iSize1);
        obj.Accept();
        obj.Display();
        int iRet=obj.DiffArray();
        System.out.println("the diffeence is:"+iRet);
        sobj.close();
    }
}






