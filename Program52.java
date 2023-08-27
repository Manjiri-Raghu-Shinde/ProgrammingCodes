import java.util.*;

class NumberX{
    public int iValue=0;

    NumberX(int iNo1){
        this.iValue=iNo1;
        
    }

    public void ColtazSequence(){
       while(iValue!=1){
        if(iValue%2==0){
            iValue=iValue/2;
            System.out.println(iValue);
        }else{
            iValue=(iValue*3)+1;
            System.out.println(iValue);
        }
       }
    }
}
public class Program52 {
    public static void main(String aee[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter number:");
        int iNumber=sobj.nextInt();

        NumberX obj=new NumberX(iNumber);
        obj.ColtazSequence();

        
    }

}


