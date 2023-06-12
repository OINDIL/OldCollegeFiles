class Literals{
    public static void main(String[] args) {
        int age = 34;
        byte age2 = 56;
        short age3 = 78;
        long ageLwra = 46567997979744l; // defaults to int but we have to give a 'l' after the literal;
        float age4 = 5.6f; // defaults to double but we have to give a 'f' after the literal;
        double age5 = 5.7;
        char name = 'a';
        String str = "oindil";
        System.out.println(name);
        System.out.println(str);
        System.out.println(age);
        System.out.printf("The value of age3 is: %d\n", age3); // we can use C lang format specifier
        System.out.println(age2);
        System.out.println(ageLwra);
        System.out.println(age4);
        System.out.println(age5);


    }
}