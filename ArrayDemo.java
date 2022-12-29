public class ArrayDemo 
{
    public static void main (String arr[])
    {  //way creating single dimensional array
        int Arr1[] = {10,20,30,40};
        
        //int Arr2[4] = {10,20,30,40};  explicitly size not allowed in java

        int Arr3[] = new int[4];   //dynamic memory allocation
        Arr3[0] = 10;
        Arr3[1] = 20;
        Arr3[2] = 30;
        Arr3[3] = 40;


        int Arr4[] = new int[]{10,20,30,40};  //dynamic memory with initialiation list
    }
    
}
