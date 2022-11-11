package Task1;
//import java.util.Scanner;

public class Calculator 
{
    public static void main (String[] args)
    {
    /*char operator;
    double number1, number2, result;
    // create an object of Scanner class
    Scanner input = new Scanner(System.in);
    
    
    System.out.println("Enter first number");
    number1 = input.nextDouble();

    System.out.println("Enter second number");
    number2 = input.nextDouble();
    
    // Scanning the operator
    System.out.print("Please Choose an operator: ");
    System.out.println();
    
    operator = input.next().charAt(0);
    
    
    // Switching the operator
    switch (operator) {

      // performs addition between numbers
      case '+':
        result = number1 + number2;
        System.out.println(number1 + " + " + number2 + " = " + result);
        break;

      // performs subtraction between numbers
      case '-':
        result = number1 - number2;
        System.out.println(number1 + " - " + number2 + " = " + result);
        break;

      // performs multiplication between numbers
      case '*':
        result = number1 * number2;
        System.out.println(number1 + " * " + number2 + " = " + result);
        break;

      // performs division between numbers
      case '/':
        result = number1 / number2;
        System.out.println(number1 + " / " + number2 + " = " + result);
        break;

      default:
        System.out.println("Invalid operator!");
        break;
    }*/
        
        String CommandLine = "70 * 30";
        // Array of strings : parts to split in it
        String [] parts = CommandLine.split(" ");
        
        double number1, number2, result;
        
        // Converting double to Srtings
        number1 = Double.parseDouble(parts[0]);
        number2 = Double.parseDouble(parts[2]);
        
        String operation = parts[1]; // Operator
        
        switch (operation) {

      // performs addition between numbers
      case "+":
        result = number1 + number2;
        System.out.println(number1 + " + " + number2 + " = " + result);
        break;

      // performs subtraction between numbers
      case "-":
        result = number1 - number2;
        System.out.println(number1 + " - " + number2 + " = " + result);
        break;

      // performs multiplication between numbers
      case "*":
        result = number1 * number2;
        System.out.println(number1 + " * " + number2 + " = " + result);
        break;

      // performs division between numbers
      case "/":
        result = number1 / number2;
        System.out.println(number1 + " / " + number2 + " = " + result);
        break;

      default:
        System.out.println("Invalid operator!");
        break;
    }
    
    }
 
}
