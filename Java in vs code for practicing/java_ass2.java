public class java_ass2 {
    static int x = 10;
    static int y;
    static void func(int z){  
        System.out.println(x+" ");
        System.out.println(y+" ");
        System.out.println(z+" ");
    }
    static{
        System.out.println("Printing static initialization block");
        y = x+5;
    }
    public static void main(String[] args) {
        func(10);
    }
}
