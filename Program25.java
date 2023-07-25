//Write a Java program to check if a string is a palindrome.
import java.util.*;

class StringX{
    public boolean CheckPalindrome(String s){
        char sArr[]=s.toCharArray();

        int iStart=0,iEnd=sArr.length-1;
        boolean bFlaf=true;

        while(iStart<iEnd){
            if(sArr[iStart]!=sArr[iEnd]){
                bFlaf=false;
            }

            iStart++;
            iEnd--;
        }

        return bFlaf;
    }
}
public class Program25 {
    public static void main(String arr[]){
        Scanner obj=new Scanner(System.in);

        System.out.println("enter string");
        String str=obj.nextLine();

        StringX sobj=new StringX();
        boolean bRet=sobj.CheckPalindrome(str);

        // System.out.println(str);

        if(bRet==true){
            System.out.println("palindrome");
        }else{
            System.out.println("not palindrome");
        }


    }
}
