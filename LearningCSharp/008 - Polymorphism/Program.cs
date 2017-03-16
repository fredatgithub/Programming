/*
 * Sources:
 *		http://rbwhitaker.wikidot.com/c-sharp-abstract-classes
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace EllisBarnes
{
	class Program
	{
		static void Main(string[] args)
		{
			HumanPlayer player1 = new HumanPlayer();
			AI			player2 = new AI();

			Console.Write("Choose your direction");

			MoveDirection player1Direction = player1.MakeMove();
			MoveDirection player2Direction = player2.MakeMove();

			Console.WriteLine();
			Console.WriteLine("Player1: " + player1.GetDirection());
			Console.WriteLine("Player2: " + player2.GetDirection());

			Console.ReadKey();
		}
	}
}
