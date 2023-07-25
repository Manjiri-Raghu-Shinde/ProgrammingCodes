import java.util.*;


class StringX{
    public int LongestSubstring(String s){
        char sArr[]=s.toCharArray();
        int iCount=0,iCnt1=0;

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            for(iCnt1=iCnt+1;iCnt1<sArr.length;iCnt1++){
                if(sArr[iCnt]==sArr[iCnt1]){
                    sArr[iCnt1]='@';
                }
            }
        }

       for(iCnt1=0;iCnt1<sArr.length;iCnt1++){
            if(sArr[iCnt1]=='X'){
                break;
            }
            else{
                iCount++;
            }
       }

       return iCount;
    }
}
public class Program32 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();


        StringX obj=new StringX();
        int iret=obj.LongestSubstring(s);

        System.out.println(iret);

    }
}
  

