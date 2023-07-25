import java.util.*;


class StringX{
    public void ConsonantReplacement(String s){
        char sArr[]=s.toCharArray();

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            if(sArr[iCnt]=='a' || sArr[iCnt]=='e' || sArr[iCnt]=='i' || sArr[iCnt]=='o' || sArr[iCnt]=='u'){
                sArr[iCnt]=sArr[iCnt];
            }else{
                sArr[iCnt]='X';
            }
        }

        for(int iCnt=0;iCnt<sArr.length;iCnt++){
            System.out.println(sArr[iCnt]);
        }
    }
}
public class Program31 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();


        StringX obj=new StringX();
        obj.ConsonantReplacement(s);


    }
}
  
