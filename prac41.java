import java.util.Scanner;
class prac41
{
    public static void main (String Arg[])
    {   Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iNo1 = 0;
        int iAdd = 0;

        System.out.println("Enter first no :");
        iNo = sobj.nextInt();

        System.out.println("Enter second no : ");
        iNo1 = sobj.nextInt();

        iAdd = iNo + iNo1;

        System.out.println("Addition is  : "+iAdd);


        //System.out.println(iNo);
    }
}