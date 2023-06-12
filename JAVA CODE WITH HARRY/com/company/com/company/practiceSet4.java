import java.util.Scanner;

public class practiceSet4 {
    public static void main(String[] args) {
        //question no.2
/*        try (Scanner marks = new Scanner(System.in)) {
            System.out.println("Enter the least marks to pass: ");
            int leastMarks = marks.nextInt();
            System.out.println("Enter your name:");
            String name = marks.next();
            System.out.println("Enter the marks[1st sub]:");
            int fir_sub = marks.nextInt();
            System.out.println("Enter the marks[2nd sub]:");
            int sec_sub = marks.nextInt();
            System.out.println("Enter the marks[3rd sub]:");
            int thi_sub = marks.nextInt();
            if (fir_sub < leastMarks || sec_sub < leastMarks || thi_sub < leastMarks) {
                System.out.println("You have failed to fill the criteria!!");
            }
            int percent = (fir_sub + sec_sub + thi_sub) / 3;
            if (percent < 40){
                System.out.println("Dear " + name + " You have failed with " + percent + "% marks");
            }
            else{
                System.out.println("Dear " + name + " You have passed with " + percent + "% marks");
            }
        }
        */
// Question no.3
        try(Scanner tax = new Scanner(System.in)){
            System.out.println("Enter your income: ");
            int income = tax.nextInt();
            int inc_tax;
            if(income < 250000) System.out.println("You will be paying Rs: 0 tax");
            else if(income >= 250000 && income < 500000){
                inc_tax = (5/100)*income;
                System.out.printf("You will be paying 5% tax\nRs: %d",inc_tax);
            }
            else if(income >= 500000 && income < 1000000){
                inc_tax = (20/100)*income;
                System.out.printf("You will be paying 20% tax\nRs: %d",inc_tax);
            }
            else if(income >= 1000000){
                inc_tax = (30/100)*income;
                System.out.printf("You will be paying 30% tax\nRs: %d",inc_tax);
            }
        }
    }
}