import java.util.*;   //import all libaries from util package
//import java.util.Scanner;  import only Scanner class from util package
class Input
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0,iNo2 = 0;
        int iAns = 0;  
        System.out.println("enter first no:");
        iNo1 = sobj.nextInt();
        System.out.println("enter second number:");
        iNo2 = sobj.nextInt();
        
        iAns = iNo1 + iNo2;

        System.out.println("addition is :"+iAns);
        sobj.close();
    }
}
