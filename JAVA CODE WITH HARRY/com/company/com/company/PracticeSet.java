/*1) sum of three numbers
import java.util.Scanner;
public class SumOfThreeNums {
    public static void main(String[] args) {
    try(Scanner number = new Scanner(System.in)){
        System.out.println("Enter first number:");
        int fir_num = number.nextInt();
        System.out.println("Enter second number: ");
        int sec_num = number.nextInt();
        System.out.println("Enter third number:");
        int thi_num = number.nextInt();
        int sum = fir_num + sec_num + thi_num;
        System.out.println("The sum of three numbers is: " +sum);
    }
  }
}
2) calculate the CGPA using marks of three subjects
import java.util.Scanner;
class cgpa{
    public static void main(String[] args) {
      try (Scanner subs = new Scanner(System.in)){
       System.out.println("Enter marks of first sub:");
       int fir_sub = subs.nextInt();
       System.out.println("Enter marks of second sub:");
       int sec_sub = subs.nextInt();
       System.out.println("Enter marks of third sub:");
       int thi_sub = subs.nextInt();
       double cgpa= ((fir_sub + sec_sub + thi_sub)/3)/9.5; 
       System.out.println("CGPA: "+cgpa);
    }
  }
}
3) the greeting
import java.util.Scanner;
class Greeting{
    public static void main(String[] args) {
        try(Scanner name = new Scanner(System.in)){
            System.out.println("Enter your name: ");
            String str = name.nextLine();
            System.out.println("Hello "+str + " have a great day!");
        }   
    }
}
4) km -> mi
import java.util.Scanner;
class kilo{
    public static void main(String[] args) {
    try(Scanner km = new Scanner(System.in)){
        System.out.println("Enter the kilometer value: ");
        float kilo = km.nextFloat();
        System.out.println("Miles: "+kilo/1.609);
    }
  }
}
5) checking if the entered number is an integer or not
import java.util.Scanner;
class check{
    public static void main(String[] args) {
        try(Scanner num = new Scanner(System.in)){
            System.out.println("Enter a number: ");
            boolean b1 = num.hasNextInt();
            System.out.println(b1);
        }
    }
}
*/