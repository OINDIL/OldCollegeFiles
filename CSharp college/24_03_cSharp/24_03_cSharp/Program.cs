using System;

namespace CollegeCsharp
{
    class FuncHello
    {
        public string hello(String a)
        {
            return a;
        }
    }
    class applying
    {
        static void Main(String[] args)
        {
            while (true)
            {
                FuncHello ob = new FuncHello();
                Console.WriteLine("Enter the string :");
                String a = Console.ReadLine();
                Console.WriteLine("The string is: " + ob.hello(a));
            }
        }
    }
}