import java.util.*;

class StringX{
    public boolean AnagramCheck(String s, String s1){
            char sArr[]=s.toCharArray();
            char sArr1[]=s1.toCharArray();
            int iCnt=0,iCnt1=0;
            char Temp;
            int iCount=0;

            for(iCnt=0;iCnt<sArr.length;iCnt++){
                for(iCnt1=0;iCnt1<sArr.length-iCnt-1;iCnt1++){
                    if(sArr[iCnt1]>sArr[iCnt1+1]){
                        Temp=sArr[iCnt1];
                        sArr[iCnt1]=sArr[iCnt1+1];
                        sArr[iCnt1+1]=Temp;
                    }
                }
            }

            for(iCnt=0;iCnt<sArr1.length;iCnt++){
                for(iCnt1=0;iCnt1<sArr1.length-iCnt-1;iCnt1++){
                    if(sArr1[iCnt1]>sArr1[iCnt1+1]){
                        Temp=sArr1[iCnt1];
                        sArr1[iCnt1]=sArr1[iCnt1+1];
                        sArr1[iCnt1+1]=Temp;
                    }
                }
            }
            
            for(iCnt=0;iCnt<sArr.length;iCnt++){
                if(sArr[iCnt]== sArr1[iCnt]){
                    iCount++;
                }
            }
            
            if(iCount==sArr.length){
                return true;
            }else{
                return false;
            }
        
    }
    
}  

public class Program27 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string 1");
        String s=sobj.nextLine();

        System.out.println("enter string 2");
        String s1=sobj.nextLine();

        StringX obj=new StringX();
        boolean bret=obj.AnagramCheck(s, s1);

        System.out.println(bret);
    }
}
