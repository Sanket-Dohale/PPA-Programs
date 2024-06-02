class Demo extends Thread
{
    public void run()
    {
        String sName = Thread.currentThread().getName();
        int i = 0;

        for (i = 0; i<=100;i++)
        {
        System.out.println("current thread is :"+sName);
        }
    }
}

class prac54
{
    public static void main(String Arg[])
    {
      String name = Thread.currentThread().getName();
      System.out.println("current thread is : "+name);

      Demo obj1 = new Demo();
      Demo obj2 = new Demo();

      obj1.setName("Hii");
      obj2.setName("Hello");

      obj1.start();
      obj2.start();
    }
}