/*
 * Source: http://rbwhitaker.wikidot.com/c-sharp-enumerations
 */

using System;

namespace EllisBarnes
{
	public enum WeekDays
	{
		Sunday, Monday,
		Tuesday, Wednesday,
		Thursday, Friday,
		Saturday
	}

	class Program
	{
		static void Main(string[] args)
		{
			WeekDays today = WeekDays.Friday;

			if (today == WeekDays.Monday)
			{
				Console.WriteLine("Oh no...");
				Console.WriteLine("Day of the week: " + ((int)today + 1));
			}
			else if (today == WeekDays.Friday)
			{
				Console.WriteLine("Fuck yeah!");
				Console.WriteLine("Day of the week: " + ((int)today + 1));
			}

			Console.ReadKey();
		}
	}
}
