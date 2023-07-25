import java.util.Scanner;

class StringX{
    public void Reverse(String s){

        char sArr[]=s.toCharArray();
        
        int iStart=0;
        int iEnd=sArr.length - 1;
        boolean bFlag=true;

        while(iStart<iEnd){
            char temp=sArr[iStart];
            sArr[iStart]=sArr[iEnd];
            sArr[iEnd]=temp;

            iStart++;
            iEnd--;
        }


        for(int i=0;i<sArr.length;i++){
            System.out.println(sArr[i]);
        }
        
    }
}
public class Program35 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        StringX obj=new StringX();
        
        obj.Reverse(s);

    }
}

