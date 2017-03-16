using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EllisBarnes
{
	class Program
	{
		static void Main(string[] args)
		{
			Text textwriter = new Text();
			
			Console.WriteLine("Writing files...");
			textwriter.Write("Hello World");
			Console.ReadKey();
		}
	}
}
