class Maths{
    public int iValue1;
    public int iValue2;

    public Maths(){
        iValue1=0;
        iValue2=0;
    }

    public Maths(int iNo1,int iNo2){
        iValue1=iNo1;
        iValue2=iNo2;
    }

    public int Addition(){

        return iValue1+iValue2;
    }
}

class Program2{

    public static void main(String ar[]){

        Maths mobj=new Maths();
        // Maths mobj1;   // object created but not initialized
        Maths mobj2=new Maths(11,21);

        int iRet=0;

        iRet=mobj.Addition();
        System.out.println("Addition is "+iRet);

        // iRet=mobj1.Addition(); // compilation error
        // System.out.println("Addition is "+iRet);

        iRet=mobj2.Addition();
        System.out.println("Addition is "+iRet);
        
    }
}