import java.util.Scanner;
public class CBSEpercentage {
    public static void main(String[] args) {
        try (Scanner marks = new Scanner(System.in)){
        System.out.println("Enter your name[in Capital]: ");
        String name = marks.nextLine();
        System.out.println("Enter the marks of the first subject(out of 100): ");
        int sub1 = marks.nextInt();
        System.out.println("Enter the marks of the second subject(out of 100):");
        int sub2 = marks.nextInt();
        System.out.println("Enter the marks of the third subject(out of 100): ");
        int sub3 = marks.nextInt();
        System.out.println("Enter the marks of the third subject(out of 100): ");
        int sub4 = marks.nextInt();
        System.out.println("Enter the marks of the third subject(out of 100): ");
        int sub5 = marks.nextInt();
        // calculating the percentage
        int percentage = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
        System.out.println("The percentage gained by: "+name + " is: " + percentage + "%");
        if(percentage >= 90){
            System.out.println("Grade: O [Outstanding]");
        }
        else if(percentage >= 80 && percentage < 90){
            System.out.println("Grade: A");
        }
        else if(percentage >= 70 && percentage < 80){
            System.out.println("Grade: B");
        }
        else if(percentage >= 60 && percentage < 70){
            System.out.println("Grade: C");
        }
        else if(percentage < 60){
            System.out.println("Grade: D");
        }
    }
  }
}
