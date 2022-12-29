
class Employee implements Cloneable
{
    public int Eid;
    public String Name;
    public int Salary;
    public Employee(int No,String str,int Value)
    {
        this.Eid=No;
        this.Name=str;
        this.Salary=Value;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

public class CloneDemo {

    public static void main(String ard[])
    {

    try{

        Employee eobj1=new Employee(101, "rahul", 11000);
        Employee eobj2=(Employee)eobj1.clone();

        System.out.println("name of first employee:"+eobj1.Name);
        System.out.println("name of second employee:"+eobj2.Name);
        
        System.out.println("salary of first employee:"+eobj1.Salary);
        System.out.println("salary of second employee:"+eobj2.Salary);

        eobj1.Name="Sagar";

        System.out.println("name of first employee:"+eobj1.Name);
        System.out.println("name of second employee:"+eobj2.Name);

    }

        catch(CloneNotSupportedException obj)
        {

        }
    }
    
}
