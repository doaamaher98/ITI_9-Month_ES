package newpackage;

/*
Task (1) : Printing Hello Java
           Printing a String that's passed as an argument from the cmd
*/
public class HelloWorld 
{
    public static void main(String[] args) 
    {
        System.out.println("Printing Passed Arguments from the user Program");
        
        int i;
        for (i=0 ; i<args.length ; i++)
        {
            System.out.print(args[i] + " ");
        }
    }
    
}
