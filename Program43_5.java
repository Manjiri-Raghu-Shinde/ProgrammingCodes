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
        
            public void Percentage()
            {
               int iCnt=0;
               
                for(iCnt=0;iCnt<Arr.length;iCnt++)
                {
                    if(Arr[iCnt]<35)
                    {
                        System.out.println(Arr[iCnt]+" Fail");
                    }
                    else if(Arr[iCnt]<50)
                    {
                        System.out.println(Arr[iCnt]+" Pass class");
                    }
                    else if(Arr[iCnt]<60)
                    {
                        System.out.println(Arr[iCnt]+" second class");
                    }
                    else if(Arr[iCnt]<70)
                    {
                        System.out.println(Arr[iCnt]+" First class");
                    }
                    else{
                        System.out.println(Arr[iCnt]+" First class with Distinction");
                    }
                   
                }
               
                
            }
        }
        
class Program43_5
        {        
            public static void main(String ar[])
            {
                Scanner sobj = new Scanner(System.in);
        
                System.out.println("Enter the size of first array that you want to create ");
                int iSize = sobj.nextInt();
                MarvellousX obj = new MarvellousX(iSize);
                obj.Accept();
                obj.Display();
                obj.Percentage();
                
                sobj.close();
            }
}
        
        
        
        
        
        
        

