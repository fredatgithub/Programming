using System;

namespace EllisBarnes
{
	class Program
	{
		

		static void Main(string[] args)
		{
			Polygon		polygon		= new Polygon(3);		// The same as a triangle, no set sizes
			Square		square		= new Square(4.5f);		// This is a square with the size of 4.5f
			Triangle	triangle	= new Triangle(6.9f); ;	// A triangle with the size of 6.9f

			Console.WriteLine("Shapes");
			Console.WriteLine(polygon.GetInfo("Polygon"));
			Console.WriteLine(square.GetInfo("Square"));
			Console.WriteLine(triangle.GetInfo("Triangle"));

			Console.ReadKey();
		}
	}
}
