class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Inside base constructor");
        this.A = 10;
        this.B = 11;
    }

    public void fun()
    {
        System.out.println("Inside base fun");
    }
}

    class Derived extends Base
    {
      public int X,Y;
      public Derived(int i,int j)
      {
        super();
        System.out.println("Inside derived Parameterised constructor");
        this.X = i;
        this.Y = j;
      }

      public void gun()
      {
        System.out.println("inside derived gun");
        super.fun();

        System.out.println("Value of A is : "+super.A);
        System.out.println("Value of X is :"+this.X);

      }
    }

class prac51
{
    public static void main(String Arg[])
    {
      Derived dobj = new Derived(12,13);
      dobj.gun();
    }
}