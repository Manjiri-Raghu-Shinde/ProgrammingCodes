import java.util.Scanner;

class StringX{
    public int CountWords(String s){

        char sArr[]=s.toCharArray();
        int iCount=0;

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            if(sArr[iCnt]==' '){
                iCount++;
            }
        }
        

        return iCount+1;
        
    }
}
public class Program37 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        StringX obj=new StringX();
        
        int iRet=obj.CountWords(s);
        System.out.println(iRet);
    }
}

