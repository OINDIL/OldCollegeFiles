class A extends Thread{
    public int sum(int a,int b){
        int sum = a + b;
        return sum;
    }
}
class B extends Thread{
    public int sub(int a,int b){
        int sub = a - b;
        return sub;
    }
}
class Main{
    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        A ob = new A();
        B ob1 = new B();
        System.out.println(ob.sum(a, b));
        System.out.println(ob1.sub(a, b));
    }
}