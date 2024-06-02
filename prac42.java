import java.util.Scanner;

class Airthmatic

{
    public int iNo1;
    public int iNo2;

    public Airthmatic()
    {
         int iNo1 = 0;
         int iNo2 = 0;
    }

    public Airthmatic(int i1,int i2)
    {
        iNo1 = i1;
        iNo2 = i2;
    }

    public int Addition()
    {
      int iAns = iNo1 + iNo2;
      return iAns;
    }

    public int Substraction()
    {
        int iAns = iNo1 - iNo2;
        return iAns;
    }

}

class prac42
{
    public static void main(String Arg[])
    {
      int iValue1 = 0;
      int iValue2 = 0;
      int iRet = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter first no : ");
      iValue1 = sobj.nextInt();

      System.out.println("Enter second number :");
      iValue2 = sobj.nextInt();

      Airthmatic obj1 = new Airthmatic();
      Airthmatic sobj1 = new Airthmatic(iValue1,iValue2);

      iRet = sobj1.Addition();

      System.out.println("Addition is :"+iRet);

      iRet = sobj1.Substraction();

      System.out.println("Substraction is : "+iRet);
      




    }

}