public class Logical_operators{
    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        System.out.println("Logical AND operator....");
        if(a && b){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }
        System.out.println("Logical OR operator...");
        if(a || b){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }
        System.out.println("Logical NOT operator...");
        System.out.println("The value of a is "+!a);
        System.out.println("The value of b is "+!b);
    }
}