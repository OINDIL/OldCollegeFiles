import java.util.Scanner;
class Index{
    int num;
    void findin(){
        int i,j;
        int arr[] = new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array elements:\n");
        for(i = 1;i <= num;i++){ // storing the array elements
            arr[i] = sc.nextInt();
        }
        int search = 0;
        System.out.println("Enter the element to search the index:");
        search = sc.nextInt();
        for(j = 1;j <= num;j++){
            if(search == arr[j]) {
                System.out.println("Index of "+arr[j]+" is :"+j);
                break;
            }
        }
    }
}
class Main{
    public static void main(String s[]) {
        Index ob = new Index();
        ob.num = Integer.parseInt(s[0]);
        ob.findin();
    }
}