import java.util.Scanner;

class StringX{
    public int CountFrequency(String s,char ch){

        char sArr[]=s.toCharArray();
        int iCount=0;
        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            if(sArr[iCnt]==ch){
                iCount++;
            }
        }

        return iCount;
    }
}
public class Program33 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        System.out.println("enter string:");
        char ch=sobj.next().charAt(0);

        StringX obj=new StringX();
        int iret=obj.CountFrequency(s, ch);

        System.out.println(iret);

    }
}
