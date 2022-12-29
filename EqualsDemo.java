class Demo
{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        No1 = a;
        No2 = b;
    }
}
//to use equals method we have to use String datatype
public class EqualsDemo {

    public static void main(String A[])
    {
        String s1="hello";
        String s2="hello";
       // Demo obj1=new Demo(11,21);
        //Demo obj2=new Demo(11,21);

        System.out.println("Hashcode of s1:"+s1.hashCode());
        System.out.println("Hashcode of s2:"+s2.hashCode());
        
        if(s1.equals(s2))//if("hello"=="hello")
        {
            System.out.println("objects are same");

        }

        else{
            System.out.println("objects are different");
        }

        if(s1==s2) //if(1001==1001)
        {
            System.out.println("objects are same");
        }
        else{
            System.out.println("objects are different");
        }
    }
    
}
