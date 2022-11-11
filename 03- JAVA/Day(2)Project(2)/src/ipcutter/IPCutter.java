package ipcutter;
import java.util.Scanner;

public class IPCutter 
{
    public static void main (String[] args)
    {
       Scanner scan = new Scanner(System.in);  // Create a Scanner object
       
       System.out.println("Enter your IP Add : ");
       String ip = scan.nextLine();  // Read user input

      //Split
      String[] cutted = ip.split("\\.");

    // ENHANCED FOR LOOP
    for (String ipp : cutted) 
    {
      System.out.println(ipp);
    }
  }
}


