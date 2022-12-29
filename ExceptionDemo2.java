import java.util.*;

public class ExceptionDemo2 {
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);
        int Arr[]={10,20,30,40};

        System.out.println("enter the index of array:");
        int i = sobj.nextInt();

        System.out.println("Data at the specified index is:"+Arr[i]);
    sobj.close();
    }
    
}
