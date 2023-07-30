import java.util.*;


class ArrayX{
    public void ArrayIntersection(int Arr[],int Arr1[]){
        int iCount=0;
        int iCnt1=0;

        for(int iCnt=0;iCnt<Arr.length;iCnt++){
            for(iCnt1=0;iCnt1<Arr1.length;iCnt1++){
                if(Arr[iCnt]==Arr1[iCnt1]){
                    iCount++;
                }
            }
        }

        int Arr3[]=new int[iCount];
        int i=0;

        for(int iCnt=0;iCnt<Arr.length;iCnt++){
            for(iCnt1=0;iCnt1<Arr1.length;iCnt1++){
                if(Arr[iCnt]==Arr1[iCnt1]){
                    Arr3[i]=Arr[iCnt];
                }
            }
        }

        for(i=0;i<iCount;i++){
            System.out.println(Arr3[i]);
        }

    }
}
public class Program39 {
    public static void main(String ar[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter size of array:");
        int iSize=sobj.nextInt();

        System.out.println("enter size of array:");
        int iSize2=sobj.nextInt();

        int Arr[]=new int[iSize];
        int Arr1[]=new int[iSize2];

        System.out.println("enter array1 elements:");
        for(int iCnt=0;iCnt<iSize;iCnt++){
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("enter array2 elements:");
        for(int iCnt=0;iCnt<iSize2;iCnt++){
            Arr1[iCnt]=sobj.nextInt();
        }

        ArrayX obj=new ArrayX();
        obj.ArrayIntersection(Arr, Arr1);
    }
}
