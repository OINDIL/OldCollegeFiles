import java.util.Scanner;

class SumArr{
    int num;
    void sum(){
        int arr[] = new int[10];
        int sum = 0;
        System.out.println("Enter the numbers:\n");
        Scanner sc = new Scanner(System.in);
        for(int i = 0;i < num;i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        System.out.println("Sum: "+sum);
    }
}
class Main{
    public static void main(String s[]) {
        SumArr ob = new SumArr();
        ob.num = Integer.parseInt(s[0]);
        ob.sum();
    }
}