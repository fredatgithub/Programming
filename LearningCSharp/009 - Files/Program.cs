using System;
using System.IO;

namespace EllisBarnes
{
	class Program
	{
		static void Main(string[] args)
		{
			// Strings
			string informationToWrite = "Hello persistent file storage world!";
			File.WriteAllText("../../test1.txt", informationToWrite); // Write the files to the same directory of the Program.cs file

			// String array
			string[] arrayOfInformation = new string[2];
			arrayOfInformation[0] = "This is line 1";
			arrayOfInformation[1] = "This is line 2";
			File.WriteAllLines("../../test2.txt", arrayOfInformation); // Write the files to the same directory of the Program.cs file

			// Reading the files back
			string fileContents = File.ReadAllText("../../test3.txt");
			Console.WriteLine(fileContents);

			string[] fileContentsArray = File.ReadAllLines("../../test4.txt");
			for (int i = 0; i < fileContentsArray.Length; i++)
			{
				Console.WriteLine(fileContentsArray[i]);
			}

			// Class stuff
			HighScore[] highScores = {
				new HighScore { Name = "Ellis",     Score = 56 },
				new HighScore { Name = "Hannah",    Score = 20 },
				new HighScore { Name = "David",     Score = 26 },
				new HighScore { Name = "Lesley",    Score = 32 },
				new HighScore { Name = "Amanda",    Score = 15 }
			};
			
			string allHighScoresText = String.Empty;

			foreach (HighScore score in highScores)
			{
				allHighScoresText += score.Name + "," + score.Score + "\n";
			}

			File.WriteAllText("../../highscores.csv", allHighScoresText);

			Console.ReadKey();
		}
	}
}
