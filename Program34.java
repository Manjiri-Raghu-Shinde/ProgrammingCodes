import java.util.Scanner;

class StringX{
    public boolean PalindromeCheck(String s){

        char sArr[]=s.toCharArray();
        
        int iStart=0;
        int iEnd=sArr.length - 1;
        boolean bFlag=true;

        while(iStart<iEnd){
            if(sArr[iStart]!=sArr[iEnd]){
                bFlag=false;
            }

            iStart++;
            iEnd--;
        }


        return bFlag;
        
    }
}
public class Program34 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        StringX obj=new StringX();
        boolean bRet=obj.PalindromeCheck(s);

        System.out.println(bRet);

    }
}

