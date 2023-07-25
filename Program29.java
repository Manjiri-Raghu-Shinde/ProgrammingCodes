import java.util.*;


class StringX{
    public int LengthOfString(String s,char ch){
        int iCount=0;
        char sArr[]=s.toCharArray();

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            if(sArr[iCnt]==ch){
                iCount++;
            }
        }

        return iCount;
    }
}
public class Program29 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        System.out.println("enter string:");
        char ch=sobj.next().charAt(0);

        StringX obj=new StringX();
        int iret=obj.LengthOfString(s,ch);

        System.out.println(iret);

    }
}
  