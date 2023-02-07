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
    public int Search(char ch)
    {
        int iCnt=0;
    
    for(int i = 0; i < Arr.length; i++)
    {
        if(ch>='A'&&ch<='Z')
        {
            ch=(char) (ch+32);
        }
        else
        {
            ch=(char) (ch-32);
        }
        if((Arr[i] == ch))
        {
            iCnt++;   
        }   
    }
    return iCnt;
}
}
class Program44_3
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);
        int iret=0;
        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();
        System.out.println("Enter the character ");
        char ch=sobj.next().charAt(0);
        MarvellousX obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        iret=obj.Search(ch);
        System.out.println("the occurences are:"+iret);
        
        sobj.close();
    }
}

