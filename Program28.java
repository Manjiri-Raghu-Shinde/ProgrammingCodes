import java.util.*;


class StringX{
    public int LengthOfString(String s){
        int iCount=0;
        char sArr[]=s.toCharArray();

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            iCount++;
        }

        return iCount;
    }
}
public class Program28 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        StringX obj=new StringX();
        int iret=obj.LengthOfString(s);

        System.out.println(iret);

    }
}
  