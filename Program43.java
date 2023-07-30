import java.util.Scanner;

class Numbers{
    public int iValue=0;
 
    Numbers(int iNo){
        this.iValue=iNo;
    }

    public void DisplayFactors(){

        for(int iCnt=1;iCnt<iValue;iCnt++){
            if(iValue % iCnt == 0){
                System.out.println(iCnt);
            }
        }

        
    }
}
public class Program43 {
    public static void main(String arr[]){

        Scanner sobj=new Scanner(System.in);
        System.out.println("enter number");
        int iValue=sobj.nextInt();

        Numbers nobj=new Numbers(iValue);
        nobj.DisplayFactors();


    }
}
