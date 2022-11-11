import java.util.*; // package to use Scanner class
public class Pattern {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int s;
        System.out.println("Enter number of Rows : ");
        s = scan.nextInt();
        // ROWS ITERATIONS
        for (int i = 1; i <= s; i++) 
        {
            // PRINTING SPACES BEFORE *
            for (int j = s; j >= i; j--) 
            {
                System.out.print(" ");
            }
            // PRINTING *
            for (int k = 1; k <= i; k++) {
                System.out.print("* ");
            }
            // for new line after printing each row
            System.out.println();
        }
    }
}
