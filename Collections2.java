import java.util.*;

public class Collections2 {
    public static void main(String A[])
    {
        LinkedList <String>lobj=new LinkedList<String>();
        lobj.add("Kapil");
        lobj.add("Aditya");
        lobj.add("Rohan");
        lobj.add("Rutik");
        lobj.add("tejas");
        System.out.println("elements of linked list are :"+lobj);

        lobj.addFirst("Pooja");

        System.out.println("elements of linked list are :"+lobj);

        lobj.addLast("Sneha");

        System.out.println("elements of linked list are :"+lobj);

        Iterator iobj =lobj.iterator();
        System.out.println("DAta using iterator is :");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        if(lobj.contains("Rohan"))
        {
           System.out.println("121 is present");
        }
        else
        {
            System.out.println("121 is not present");
        }
        lobj.remove();

        System.out.println("elements of linked list are :"+lobj);

        lobj.remove(0);
        System.out.println("elements of linked list are :"+lobj);

        lobj.removeLast();
        System.out.println("elements of linked list are :"+lobj);

        System.out.println("number of elemets are:"+lobj.size());

        lobj.set(1,"Deepak");

        System.out.println("elements of linked list are :"+lobj);

        lobj.clear();
        System.out.println("elements of linked list are :"+lobj);
    }
    
}

