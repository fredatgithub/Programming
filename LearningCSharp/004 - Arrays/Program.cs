using System;

namespace EllisBarnes
{
    class Program
    {

		static void print_array(Array arr)
		{
			// Loop through the array and print the names out in an ordered list
			Console.WriteLine("");
			for (int i = 0; i < arr.Length; i++)
			{
				Console.WriteLine(i + 1 + ". " + arr.GetValue(i));
			}
		}

        static void Main(string[] args)
        {
			// Intialize and create a string array with a size of 5
			string[] names =
			{
				"Ellis", "Hannah",
				"David","Corey", "Kassie"
			};

			int[] test_scores =
			{
				67, 98, 78, 68, 65,
				32, 100, 23, 50
			};

			print_array(names);
			print_array(test_scores);

            Console.ReadKey();
        }
    }
}
