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
    public int Difference()
    {
      int iCnt=0;
      int iCnt1=0;
      
        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt++;
                
            }
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt1++;
                
            }
            
        }

        return iCnt-iCnt1;
       
    }
}

class Program44_4
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();
        MarvellousX obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        int iret=obj.Difference();
        System.out.println("the difference is:"+iret);
        sobj.close();
    }
}

