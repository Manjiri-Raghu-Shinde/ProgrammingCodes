import java.util.*;

public class Collection8 {
    public static void main(String A[])
    {
        Hashtable <String,Integer> hobj = new Hashtable<String,Integer>();

        hobj.put("PPA",100000);
        hobj.put("LB",170000);
        hobj.put("Python",123000);
        hobj.put("Lsp",21000);

        System.out.println(hobj.get("Python"));
        Enumeration eobj=hobj.keys();

        while(eobj.hasMoreElements())
        {
            System.out.println("Value is "+eobj.nextElement());
        }

        System.out.println("elements of hashtable : "+hobj);

        hobj.remove("LB");

        System.out.println("elements of hashtable : "+hobj);
    }
    
}

 


