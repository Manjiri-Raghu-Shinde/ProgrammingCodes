public class Loop
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40};
        int iCnt = 0;
        System.out.println("traversal of array using for loop");
        for(iCnt = 0;iCnt < Arr.length ; iCnt ++)  //same for c,c++,java
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println("traversal using while loop:");
        
        iCnt = 0;
        while(iCnt<Arr.length)   //same for c,c++,java
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        System.out.println("traversal using do while loop:");
        iCnt = 0;
        do   //same for c,c++,java
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }while(iCnt<Arr.length);

        System.out.println("traversal using for each loop:");

        for(int iNo : Arr) //only in java
        {
            System.out.println(iNo);
        }
    }
    
}
