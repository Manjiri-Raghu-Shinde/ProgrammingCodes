
import java.io.*;

public class BufferedInput {

    public static void main(String arg[])
    {
        InputStreamReader iobj=new InputStreamReader(System.in);
        BufferedReader bobj=new BufferedReader(iobj);

        String name=null;
        int Age=0;
        float Marks =0.0f;

        try{
        System.out.println("enter your name");
        name=bobj.readLine();

        System.out.println("enter your age:");
        Age=Integer.parseInt(bobj.readLine());

        System.out.println("enter your marks:");
        Marks=Float.parseFloat(bobj.readLine());
        }

        catch(IOException obj)
        {

        }

        System.out.println("name:"+name);
        System.out.println("age:"+Age);
        System.out.println("marks:"+Marks);



    }
    
}
