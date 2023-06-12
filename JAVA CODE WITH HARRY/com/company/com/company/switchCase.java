import java.util.Scanner;

public class switchCase {
    public static void main(String[] args) {
        try(Scanner choice = new Scanner(System.in)){
            System.out.println("1. For add\n2.For sub");
            int num = choice.nextInt();
            switch(num){ // enhanced switch, just put -> at the end of cases and complete with curly braces!
                case 1 -> {
                int a,b;
                System.out.println("Enter the value of a and b: ");
                a = choice.nextInt();
                b = choice.nextInt();
                System.out.printf("The addition of %d + %d is: %d",a,b,a+b);
                }
                case 2 -> {
                int c,d;
                System.out.println("Enter the value of a and b: ");
                c = choice.nextInt();
                d = choice.nextInt();
                System.out.printf("The subtraction of %d + %d is: %d",c,d,c-d);
                }
                default ->{
                System.out.println("INVALID CHOICE!!!");
                }
            }
        }
    }
}
