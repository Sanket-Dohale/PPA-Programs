import java.io.*;

class prac47
{
    public static void main(String Arg[]) 
    {
        try
        {
            InputStreamReader iobj = new InputStreamReader (System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter your name : ");
        String name = bobj.readLine();

        System.out.println("Welcome "+name);
        }

        catch(IOException obj)
        {
            System.out.println("Inside catch");

        }

        finally
        {
           
        }
    }
}