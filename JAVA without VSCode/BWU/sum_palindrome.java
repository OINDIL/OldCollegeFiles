package BWU;
class Prime{
    int num;
    void prime_sum(){
        int range = 0,i,flag = 0;
        while(range>0){
        for(i = 2;i < num/2;i++){
            if(num % i == 0) {
                flag = 1;
            }
        }
            }
        }
    } 
class Main{
    public static void main(String s[]) {
        Prime ob = new Prime();
        ob.num = Integer.parseInt(s[0]);
        ob.prime_sum();
    }
}