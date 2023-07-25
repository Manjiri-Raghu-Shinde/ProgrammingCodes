import java.util.*;

public class Program22 {
    public static void main(String arr[]){
        String str;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        str=sobj.nextLine();

        for(int iCnt=0;iCnt<str.length();iCnt++){
            System.out.println(str.charAt(iCnt));
        }
    }
}
