class Demo implements Cloneable
{
    public int Marks;
    public int Age;
    public String Name;
    
    public Demo(int i,int j,String str)
    {
        System.out.println("Inside demo constructor");
        this.Marks = i;
        this.Age = j;
        this.Name = str;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
    public void Display()
    {
        System.out.println("Inside Demo Display");
    }

}

class prac50
{
    public static void main(String Arg[])
    {
        try
        {
      Demo dobj = new Demo(85,22,"Sanket");
     
      System.out.println("Name of student is : "+dobj.Name);
      System.out.println("Age of Student is : "+dobj.Age);
      System.out.println("Marks he obtained :"+dobj.Marks);

      Demo dobjx = (Demo)dobj.clone();
      System.out.println("Name of student is : "+dobjx.Name);
      System.out.println("Age of Student is : "+dobjx.Age);
      System.out.println("Marks he obtained :"+dobjx.Marks);
        }

        catch(CloneNotSupportedException obj)
        {

        }
    }
}