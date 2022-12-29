import java.util.Scanner;

public class ArrayUSer 
{
    public static void main (String arg[])
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the size of array:");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        //int Arr[] = (int *)malloc(iSize * sizeof(int));
        
        System.out.println("number of elements in the array are:"+Arr.length);
        System.out.println("enter the elements of array :");

        for(iCnt = 0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("elementss of array are:");
        for(iCnt = 0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        int iSum=0;

        for(iCnt = 0;iCnt<Arr.length;iCnt++)
        { 
            iSum = iSum + Arr[iCnt];   
        }
        System.out.println("Addition of elements of array:"+iSum);
        sobj.close();
        
    }
   
    
}
