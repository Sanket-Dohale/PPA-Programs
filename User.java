import java.util.*;

class AgeInvalid extends Exception
{
}

class User
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter your age : ");
            int Age = sobj.nextInt();

            if(Age < 18)
            {
                throw new AgeInvalid();
            }
            else
            {
                System.out.println("You succesfully loged in on site");
            }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Age is invalid to register for this site");
        }
    }
}