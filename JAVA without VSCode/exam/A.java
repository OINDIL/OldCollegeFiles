class A{
    int a = 10;float f = 68.99f; String s = "Betichod";
    A(){
        System.out.println(a+" "+f+" "+s);
    }
    A(A ref){
        a = ref.a;
        f = ref.f;
        s = ref.s;
        System.out.println(a+" "+f+" "+s);
    }
}
class B{
    public static void main(String[] args) {
        A ob = new A();
        A ob2 = new A(ob);   
    }
}