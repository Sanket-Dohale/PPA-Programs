class Demo
{
    public int iNo1,iNo2;

    public Demo()
    {
      System.out.println("Inside Demo constructor");
      iNo1 = 0;
      iNo2 = 0;
    }

    public void Sun()
    {
        System.out.println("Inside demo sun");
    }
}

class Derived extends Demo
{
    public int iNo3,iNo4;

    public Derived()
    {
        System.out.println("Inside derived constructor");
        iNo3 = 0;
        iNo4 = 0;
    }

    public void Run()
    {
        System.out.println("Inside Derived Run");
    }
}

class prac44
{
    public static void main(String Arg[])
    {
      Derived dobj = new Derived();

      dobj.Sun();
      dobj.Run();


    }
}