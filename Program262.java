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

    public boolean Palindrome()
    {
        int iStart=0;
        int iEnd=Arr.length-1; 
        boolean bFlag=true; 

        while(iStart<iEnd)
        {
            if(Arr[iStart]!=Arr[iEnd])
            {
                bFlag=false;
                break;
            }
            iStart++;
            iEnd--;
            
        }

        return bFlag;
    } 
    
    
}
class Program262 {
    public static void main(String ars[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the size of array:");
        int iSize=sobj.nextInt();
        MarvellousX obj=new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        boolean bRet=obj.Palindrome();
        if(bRet==false)
        {
            System.out.println("array is not palindrome");

        }
        else
        {
            System.out.println("array is palindrome");
        }
        
        sobj.close();
    }
    
}


