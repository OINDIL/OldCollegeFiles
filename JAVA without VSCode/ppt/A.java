class A{
    final void sum(){
        int a = 5,b = 6,sum = a + b;
        System.out.println("Sum: "+sum);
    }
}
class B extends A{
    void sum(){
        int a = 10,b = 5,sum = a + b;
        System.out.println("Sum: "+sum);
    }
}
class Main{
    public static void main(String[] args) {
        B ob = new B();
        ob.sum();
    }
}