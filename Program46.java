import java.util.Scanner;

class Numbers{
    public int iNo=0;

    Numbers(int iValue){
        this.iNo=iValue;
    }

    public void fibonacciSeries(){
        int iElement1=0;
        int iElement2=1;
        int iElement3=0;

        System.out.println("the fibonacci series is:");
        System.out.println(iElement1);
        System.out.println(iElement2);
        
        for(int iCnt=0;iCnt<(iNo-2);iCnt++){
            iElement3=iElement1+iElement2;

            System.out.println(iElement3);

            iElement1=iElement2;
            iElement2=iElement3;
        }
    
    }
}

public class Program46 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter a value:");
        int iValue=sobj.nextInt();

        Numbers obj=new Numbers(iValue);
        obj.fibonacciSeries();

       
    }
}
