import java.util.Scanner;

class StringX{
    public int CountChar(String s){
        char Arr[]=s.toCharArray();
        int Count=0;

        for(int iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z'  ||  Arr[iCnt]>='A' && Arr[iCnt]<='Z'){
                Count++;
            }
        }

        return Count;
    }
}
public class Program54 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);
        String s=sobj.nextLine();

        StringX obj=new StringX();

        int iRet=obj.CountChar(s);
        System.out.println(iRet);

    }
}
