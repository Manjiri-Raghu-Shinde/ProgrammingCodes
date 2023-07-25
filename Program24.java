//Write a Java program to reverse a string.
import java.util.Scanner;

class StringX{
    public void ReverseString(String s){
        char sArr[]=s.toCharArray();
        int iStart=0,iEnd=sArr.length-1;

        while(iStart<iEnd){
            char temp = sArr[iStart];
            sArr[iStart] = sArr[iEnd];
            sArr[iEnd] = temp;

            iStart++;
            iEnd--;
        }

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            System.out.print(sArr[iCnt]);
        }
    }
}
public class Program24 {
    public static void main(String arr[]){
        Scanner obj=new Scanner(System.in);

        System.out.println("enter string");
        String str=obj.nextLine();

        StringX sobj=new StringX();
        sobj.ReverseString(str);

        // System.out.println(str);

    }
}
