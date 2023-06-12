class Windows_10
{
    void meth(){
        System.out.println("This is windows 10");
    }
}
class Windows_11 extends Windows_10{
    void meth2(){
        System.out.println("This is windows 11");
    }
    public static void main(String[] args) {
        Windows_11 win = new Windows_11();
        win.meth();
    }
}