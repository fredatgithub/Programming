using System;

namespace EllisBarnes
{
    class Program
    {
        static void isTrue(string prompt)
        {
            Console.Write(prompt + " ");
            string response = Console.ReadLine();

            if (response == "yes" || response == "Yes")
            {
                Console.WriteLine("You do.");
            }
            else if (response == "no" || response == "No")
            {
                Console.WriteLine("You do not.");
            }
            else
            {
                Console.WriteLine("Use yes/no only");
            }
        }

        static void Main(string[] args)
        {
            isTrue("Do you like pokemon?");
            isTrue("Do you like pizza?");
            isTrue("Do you like programming?");
            Console.ReadKey();
        }
    }
}
