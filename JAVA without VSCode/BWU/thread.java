public class A extends Thread{
    public void run(){
        for(int i = 0;i < 5;i++) System.out.println("Thread A "+i);
    }    
}
public class B extends Thread{
    public void run(){
        for(int i = 0;i < 5;i++) System.out.println("Thread B"+i);
    }
}
class Main{
    public static void main(String[] args) {
        A ob1 = new A();
        B ob2 = new B();
        ob1.start();
        ob2.start();
    }
}
