package BWU;
class Armstrong {
    public static void main(String s[]) {
        int a = Integer.parseInt(s[0]),temp = a,rem,sum = 0;
        while(a!=0){
            rem = a%10;
            sum += rem*rem*rem;
            a = a/10;
        }
        if(sum == temp) System.out.println("The number "+temp+" is an armstrong number.");
        else{
            System.out.println("The number is not an armstrong number.");
        }
    }
}
