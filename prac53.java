class prac53
{
    public static void main(String Arg[])
    {
        String name = "Sanket";

        String sName = "Sanket";

        String xName = new String("Sanket");

        if(name==xName)
        {
            System.out.println("both are equals");
        }

        else
        {
            System.out.println("Both are not equals");
        }


        if(name.equals(xName))
        {
            System.out.println("name and sName are equals string");
        }
        else
        {
            System.out.println("Strings are not equals");
        }
    }
}