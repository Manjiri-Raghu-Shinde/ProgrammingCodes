import java.util.Scanner;

class StringX{
    public int CountChar(String s){
        char Arr[]=s.toCharArray();
        int charcnt=0,numcnt=0,capcnt=0,slashcnt=0;

        if(Arr.length<4){
            return 0;
        }

        if(Arr[0]>='0' && Arr[0]<='9'){
            return 0;
        }

        for(int iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]>='0' && Arr[iCnt]<='9'){
                numcnt++;
            }

            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z'){
                capcnt++;
            }

            if(Arr[iCnt]==' ' || Arr[iCnt]=='/'){
                slashcnt++;
            }
        }

        if(slashcnt!=0){
            return 0;
        }else if(numcnt<1){
            return 0;
        }else if(capcnt<1){
            return 0;
        }

        return 1;
    }
}
public class Program55 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);
        String s=sobj.nextLine();

        StringX obj=new StringX();

        int iRet=obj.CountChar(s);
        System.out.println(iRet);

    }
}
