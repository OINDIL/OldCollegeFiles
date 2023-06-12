import java.util.Scanner;
public class Strings {
    public static void main(String[] args) {
        try(Scanner str = new Scanner(System.in)){
        System.out.println("Enter the string: ");
        String name = str.nextLine();
        // String value = name.replace('i','j');
        System.out.println(name.indexOf("o"));
        }
    }
}
