package BWU;
class number_games {
    int num;
    void even_odd(){
        int i = num;
        if(i % 2 == 0) System.out.println("Even");
        else System.out.println("Odd");
    }  
    void armstrong(){
        int rem,sum = 0,temp = num;
        while(num!=0){
            rem = num % 10;
            sum += rem*rem*rem;
            num = num / 10;
        }
        if(sum == temp) System.out.println(temp+" is an armstrong number");
        else System.out.println(temp+" is not an armstrong number");
    }
    void palindrome(){
        int rem,sum = 0,temp = num;
        while(num!=0){
            rem = num % 10;
            sum = (sum*10)+rem;
            num = num / 10;
        }
        if(sum == temp) System.out.println(temp+" is a palindrome");
        else System.out.println(temp+" is not a palindrome");
    }
    void fact(){
        int i,fact = 1,temp = num;
        for(i = 1;i <= temp;i++){
            fact *= i;
        }
        System.out.println("Factorial: "+fact);
    }
}
class Main{
    public static void main(String s[]) {
        number_games ob = new number_games();
        ob.num = Integer.parseInt(s[0]);
        ob.armstrong();
        //ob.even_odd();
        // ob.fact();
        // ob.palindrome();
    }
}
