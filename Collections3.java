import java.util.*;
class Book
{
    public String Name;
    public int Price;
    public Book(String s,int i)
    {
        this.Name=s;
        this.Price=i;
    }

    public void Display()
    {
        System.out.println("Book Name: "+this.Name+" Prize: "+this.Price);
    }
}

public class Collections3 {
    public static void main(String A[])
    {
        LinkedList <Book>lobj=new LinkedList<Book>();
        lobj.add(new Book("Let US See",400));
        lobj.add(new Book("Data Structures",580));
        lobj.add(new Book("C++ Programming",980));
        lobj.add(new Book("Angular web Development",790));

        Iterator iobj=lobj.iterator();
        Book bref=null;
        System.out.println("elements of linked list are :");
        while(iobj.hasNext())
        {
            bref=(Book)iobj.next();
            bref.Display();
        }
        
    }
    
}
