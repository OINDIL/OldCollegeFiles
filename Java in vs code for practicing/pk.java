class pk
{
    public static void main(String[] args) {
     int a=20,b=2,c;
    try{
        c=a/b; 
        System.out.println(c);
    }
    catch(Exception e)
    {
        System.out.println(e);
    }
    finally
    {
        System.out.println("Check the code");
    }
    }
}
