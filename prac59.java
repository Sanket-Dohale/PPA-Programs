class Demo extends Thread 
{
    public void run() 
    {
        try
        {
        int i = 0;

        String Name = Thread.currentThread().getName();

        for(i=0;i<=10;i++)
        {
            System.out.println("Current thread is : "+Name +"With value :"+i);

            Thread.sleep(1000);
        }
    }

    catch( InterruptedException obj)
    {

    }
    }
}
class prac59
{
    public static void main(String Arg[])
    {
        System.out.println("Current thread is :"+Thread.currentThread().getName());
       Demo dobj = new Demo();
       Demo sobj = new Demo();

       dobj.setName("Sanket");
       sobj.setName("Dohale");

       dobj.start();
       sobj.start();
    }
}