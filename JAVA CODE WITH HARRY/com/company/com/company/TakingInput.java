import java.util.Scanner;
class TakingInput{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter the first input: ");
            int a = sc.nextInt();
            System.out.println("The integer is : "+a);
            System.out.println("Enter a floating point number: ");
            float b = sc.nextFloat();
            System.out.println(b);
            System.out.println("Enter a sentence:");
            String c = sc.nextLine(); // next line helps to write full sentences
            System.out.println(c);
            boolean b1 = sc.hasNextInt();
            System.out.println(c);
            System.out.println(b1);
        }
    }
}