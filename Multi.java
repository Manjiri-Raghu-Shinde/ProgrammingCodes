public class Multi 
{
    public static void main (String arg[])
    {
        //Arr is two dimensional array which contains 3 one dimensinal array 
        //each one dimensional array contains 4 elements
        //each of type integer

        //Allowed in c & c++
        //int Arr[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
        
        //allowed in java only
        
        int Arr [][]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
        System.out.println(Arr.length);
        System.out.println(Arr[0].length);

    }
    

}
