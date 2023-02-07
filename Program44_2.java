import java.util.*;

class MarvellousX
{
    public char Arr[];
    
    public MarvellousX(int iSize)
    {
        Arr = new char[iSize];
    }
    
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter "+Arr.length + " of first array elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.next().charAt(0);
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
    public void ArrayReplace()
    {
      
    System.out.println("the output is:");
        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                Arr[i]=(char) (Arr[i]-32);
                
            }
            System.out.println(Arr[i]);
        }
       
    }
}

class Program44_2
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();
        MarvellousX obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        obj.ArrayReplace();
        
        sobj.close();
    }
}

