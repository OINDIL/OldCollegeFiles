class Thiskey{
    int x = 10,y = 13;

    int var(int y){
        int x = y;
        return this.x;
    }
}
class Main{
    public static void main(String[] args) {
        Thiskey th = new Thiskey();
        System.out.println(th.var(15)+" "+th.y);
    }
}