/*
 * Sources: 
 *		http://rbwhitaker.wikidot.com/c-sharp-using-classes
 *		http://rbwhitaker.wikidot.com/c-sharp-creating-classes
 *		http://rbwhitaker.wikidot.com/c-sharp-properties
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
			Game game = new Game();
			string[] players = game.IntializePlayers();

			bool running = true;
			while (running)
			{
				game.Run(players);

				// Close if the player hits Escape
				if(Console.ReadKey().Key == ConsoleKey.Escape)
				{
					running = false;
				}
			}
		}
	}
}
