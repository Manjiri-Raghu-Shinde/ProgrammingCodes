import java.util.Scanner;

class StringX{
    public char FirstNonRepeatedCharacter(String s){

        char sArr[]=s.toCharArray();
        
        char ch='\0';

        for (int i = 0; i < sArr.length; i++) {
            boolean isRepeated = false;
            for (int j = 0; j < sArr.length; j++) {
                if (i != j && sArr[i] == sArr[j]) {
                    isRepeated = true;
                    break;
                }
            }
            if (!isRepeated) {
                return sArr[i];
            }
        }
        
        return '\0';
        
    }
}
public class Program38 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        String s=sobj.nextLine();

        StringX obj=new StringX();
        
        char ch=obj.FirstNonRepeatedCharacter(s);
        System.out.println(ch);
    }
}


