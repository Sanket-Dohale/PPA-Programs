class Demo extends Thread
{
    public void run()
    {
       int i = 0;
       String Name = Thread.currentThread().getName();

       for(i =1;i<=100;i++)
       {
       System.out.println("current thread is : "+Name);
       }
    }
}

class prac52
{
    public static void main(String Arg[])
    {
      String s1 = Thread.currentThread().getName();
      System.out.println("Current thread is : "+s1);

      Demo obj1 = new Demo();
      Demo obj2 = new Demo();

      obj1.setName("Sanket");
      obj2.setName("Dohale");

      obj1.start();
      obj2.start();



    }
}