package BWU;
class sum {
    int a,b;
    void getData(int c,int d){
        a = c;
        b = d;
    }
    void printData(){
        System.out.println(a+" "+b);
    }
}
class Main{
    public static void main(String s[]) {
        sum ob = new sum();
        ob.getData(10, 20);
        ob.printData();
    }
}
