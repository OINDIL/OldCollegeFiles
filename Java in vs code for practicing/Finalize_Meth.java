class Finalize_Meth {
    public void finalize(){
        System.out.println("Garbage is collected");
    }
    void sum(){
        System.out.println("E=dfosjfas");
    }
}
class Garbage extends Finalize_Meth{
    public static void main(String[] args) {
        Finalize_Meth fm = new Finalize_Meth();
        Finalize_Meth fm2 = new Finalize_Meth();
        fm = null;
        fm2.sum();
        System.gc();
    }
}
