//Write a Java program to count the number of characters in a string.
import java.util.*;

class StringX{
    public int CountLetters(String s){
        int iCnt=0,iCount=0;
        for(iCnt=0;iCnt<s.length();iCnt++){
            iCount++;
        }

        return iCount;
    }
}
public class Program23 {
    public static void main(String arr[]){
        Scanner obj=new Scanner(System.in);

        System.out.println("enter string");
        String str=obj.nextLine();

        StringX sobj=new StringX();
        int iRet=sobj.CountLetters(str);

        System.out.println(iRet);

    }
}
