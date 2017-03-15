/*
 * Source: http://rbwhitaker.wikidot.com/c-sharp-math
 */
using System;

namespace EllisBarnes
{
    class Math
    {
        static double GetInput(string output)
        {
            Console.Write(output);
            double number = Convert.ToDouble(Console.ReadLine());
            return number;
        }

        static void Main(string[]  args)
        {
            // Creating some variables using the function that returns them
            double a = GetInput("Please enter a number: ");
            double b = GetInput("Please enter a number: ");

            // Assigning doubles to the values and the operations
            double addition         = a + b;
            double division         = a / b;
            double subtraction      = a - b;
            double multiplication   = a * b;

            // This is showing concatination 
            Console.WriteLine(a + " + " + b + " = " + addition);
            Console.WriteLine(a + " - " + b + " = " + subtraction);
            Console.WriteLine(a + " * " + b + " = " + multiplication);
            Console.WriteLine(a + " / " + b + " = " + division);
            Console.ReadKey();
        }
    }
}
