class Sanket
{
    public int i,j;

    public void Marvellous()
    {
        System.out.println("Inside MArvellous");
    }

    protected void finalize()
    {
        System.out.println("Inside finalized method");
    }
}
class prac49
{
    public static void main(String Arg[])
    {
      Sanket sobj = new Sanket();

      System.out.println(sobj.hashCode());
      System.out.println(sobj.getClass().getName());

      sobj = null;

      System.gc();

      //sobj.Marvellous();
    }
}