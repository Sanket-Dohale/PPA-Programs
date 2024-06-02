class Parent
{
    int i = 0;

    synchronized public void Display(int no)
    {
      for(i = 1;i<=10;i++)

      try
      {
      {
        System.out.println(i*no);
        Thread.sleep(1000);
      }
    }
    catch(Exception obj)
    {

    }
    }
}

class Demo extends Thread
{
    public Parent obj;

    public Demo(Parent pobj)
    {
        this.obj = pobj; 
    }

    public void run()
    {
        obj.Display(10);
    }
}

class Hello extends Thread
{
    public Parent obj;

    public Hello(Parent pobj)
    {
        this.obj = pobj;
    }

    public void run()
    {
        obj.Display(20);
    }
}

class prac60
{
    public static void main(String Arg[])
    {

        Parent pobj = new Parent();

        Demo dobj = new Demo(pobj);

        Hello hobj = new Hello(pobj);

        dobj.start();
        hobj.start();

    }
}