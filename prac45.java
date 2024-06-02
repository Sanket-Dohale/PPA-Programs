import java.util.Scanner;

class Demo
{
    public int Addition(int A,int B)
    {
        return A + B;
    }

    public int Addition(int A,int B,int C)
    {
      return A + B + C;
    }

    public double Addition (double A,double B)
    {
        return A + B;
    }
}
class prac45
{
    public static void main(String arg[])
    {
        int iRet = 0;
        double dRet = 0;

        Demo dobj = new Demo();
           
       iRet = dobj.Addition(11,21);
       System.out.println(iRet);

       iRet = dobj.Addition(11,21,31);
       System.out.println(iRet);

       dRet = dobj.Addition(11.5,21.5);
       System.out.println(dRet);

        

        dRet = dobj.Addition(11,21);
    }

}