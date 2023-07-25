import java.util.Scanner;

class StringX{
    public boolean CheckStringiSMadeUpOfDigits(String s){

        char sArr[]=s.toCharArray();
        boolean bFlag=false;
        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            if((sArr[iCnt]>='0') && (sArr[iCnt]<='9')){
                bFlag=true;
            }else{
                bFlag=false;
                break;
            }
        }

        return bFlag;
        
    }
}
public class Program36 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        StringX obj=new StringX();
        
        boolean bRet=obj.CheckStringiSMadeUpOfDigits(s);
        System.out.println(bRet);
    }
}

