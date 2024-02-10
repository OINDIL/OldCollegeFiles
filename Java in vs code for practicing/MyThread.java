public class MyThread extends Thread {
    public void run(){
        try{
        for(int i = 0;i < 10000;i++){
            System.out.println("Thread A");
            Thread.sleep(1000);
        }
        }
        catch(InterruptedException e){
            System.out.println("Error 404");
        }
    }
}
class MyThread1 extends Thread{
    public void run(){
        try{
        for(int i = 0;i < 10000;i++){
            System.out.println("Thread B");
            Thread.sleep(1000);
        }
    }
    catch(InterruptedException e1){
        System.out.println("Error 404");
    }
    }
}
class Main{
    public static void Main(String[] args) {
        MyThread ob = new MyThread();
        MyThread1 ob1 = new MyThread1();
        ob.start();
        ob1.start();
    }
}