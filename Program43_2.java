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
        
            public void ReverseNo()
            {
               int iCnt=0;
               int iSum=0;
               int iDigit=0;
               int iNo=0;
                for(iCnt=0;iCnt<Arr.length;iCnt++)
                {
                    iNo=Arr[iCnt];
                   while(iNo!=0)
                   {
                        iDigit=iNo%10;
                        iSum=iSum+iDigit;
                        iNo=iNo/10;
                   }
                   
                   Arr[iCnt]=iSum;
                   iSum=0;
                   
                }
                for(iCnt =0; iCnt < Arr.length; iCnt++)
                {
                    System.out.print(Arr[iCnt]+"\t");
                }
                System.out.println();
                
            }
        }
        
class Program43_2
        {        
            public static void main(String ar[])
            {
                Scanner sobj = new Scanner(System.in);
        
                System.out.println("Enter the size of first array that you want to create ");
                int iSize = sobj.nextInt();
                MarvellousX obj = new MarvellousX(iSize);
                obj.Accept();
                obj.Display();
                obj.ReverseNo();
                
                sobj.close();
            }
}
        
        
        
        
        
        
        

