using System;
using System.Collections.Generic;

namespace EllisBarnes
{
	class Game
	{
		public string[] IntializePlayers()
		{
			List<string> names = new List<string>();
			// Ask the user to enter names
			Console.WriteLine("Please enter two names.");
			string P1Name = Console.ReadLine();
			string P2Name = Console.ReadLine();

			names.Add(P1Name);
			names.Add(P2Name);

			return names.ToArray();
		}

		static void CheckScore(Player P1, Player P2)
		{
			// Store values of the two players scores
			int S1 = P1.Score, S2 = P2.Score;

			Console.WriteLine("======================");
			if (S1 > S2)
				Console.WriteLine(P1.Name + " wins!!");
			else if (S2 > S1)
				Console.WriteLine(P2.Name + " wins!!");
			else if (S1 == S2)
				Console.WriteLine("It is a tie!");
			Console.WriteLine("======================\n");
		}

		static void GetWinner(Player P1, Player P2)
		{
			// Store the value of the scores
			int S1 = P1.Score, S2 = P2.Score;
			// Print the final score
			Console.WriteLine(P1.Name + ": " + S1);
			Console.WriteLine(P2.Name + ": " + S2);

			CheckScore(P1, P2);
		}

		public void Run(string[] names)
		{
			Player player1 = new Player(names[0]) { Score = 0, Lives = 20 };
			Player player2 = new Player(names[1]) { Score = 0, Lives = 20 };

			Random random = new Random();
			while (player1.Lives > 0 && player2.Lives > 0)
			{
				if (player1.Lives != 0)
				{
					player1.AddPoints(random.Next(0, 5));
					player1.Hurt();
				}
				if (player2.Lives != 0)
				{
					player2.AddPoints(random.Next(0, 5));
					player2.Hurt();
				}

				if(player1.Lives == 0 && player2.Lives == 0)
				{
					GetWinner(player1, player2);
				}
			}
		}
	}
}
