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
        
            public void Pattern()
            {
               int iCnt=0;
               int iCnt1=0;
                for(iCnt=0;iCnt<Arr.length;iCnt++)
                {
                    for(iCnt1=0;iCnt1<Arr[iCnt];iCnt1++)
                    {
                        System.out.print("*\t");
                    }
                    System.out.println();
                }
                  
            }
        }
        
class Progrm44_5
        {        
            public static void main(String ar[])
            {
                Scanner sobj = new Scanner(System.in);
        
                System.out.println("Enter the size of first array that you want to create ");
                int iSize = sobj.nextInt();
                MarvellousX obj = new MarvellousX(iSize);
                obj.Accept();
                obj.Display();
                obj.Pattern();
                
                sobj.close();
            }
}
        
        
        
        
        
        
        
