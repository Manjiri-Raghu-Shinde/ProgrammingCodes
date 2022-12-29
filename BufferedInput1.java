//worst way of handling ioexception
import java.io.*;

public class BufferedInput1 
{

    public static void main(String arg[]) throws IOException
    {
        InputStreamReader iobj=new InputStreamReader(System.in);
        BufferedReader bobj=new BufferedReader(iobj);

        //BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        
        String name=null;
        int Age=0;
        float Marks =0.0f;

        
        System.out.println("enter your name");
        name=bobj.readLine();

        System.out.println("enter your age:");
        Age=Integer.parseInt(bobj.readLine());

        System.out.println("enter your marks:");
        Marks=Float.parseFloat(bobj.readLine());
        

        System.out.println("name:"+name);
        System.out.println("age:"+Age);
        System.out.println("marks:"+Marks);



    }
    
}

