import java.util.*;

class StringX{
    public int UniqueCharacterCount(String s){
        char Schar[]=s.toCharArray();
        int iCnt=0,iCnt1=0;
        int iCount=0;

        for(iCnt=0;iCnt<Schar.length;iCnt++){
            for(iCnt1=iCnt+1;iCnt1<Schar.length;iCnt1++){
                if(Schar[iCnt]==Schar[iCnt1]){
                    Schar[iCnt1]='@';
                }
            }
        }

        for(iCnt=0;iCnt<Schar.length;iCnt++){
            if((Schar[iCnt]>='a' || Schar[iCnt]>='A') && (Schar[iCnt]<='z' || Schar[iCnt] <='Z')){
                iCount++;
            }
        }

        // System.out.println(iCount);
        return iCount;
    }
}
public class Program26 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter a string");
        String sChar=sobj.nextLine();

        StringX obj=new StringX();
        int iret=obj.UniqueCharacterCount(sChar);
         System.out.println("the countof unique characters is:"+iret);

    }
}
