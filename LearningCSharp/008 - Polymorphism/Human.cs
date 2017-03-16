using System;
using System.Collections.Generic;
using System.Linq;
using System.Text; 

namespace EllisBarnes
{
	class HumanPlayer : Player
	{
		public HumanPlayer() { }

		/// <summary>
		/// This function is overriding the normal Player.cs so that the user can have their own moves
		/// </summary>
		/// <returns>MoveDirection</returns>
		public override MoveDirection MakeMove()
		{
			ConsoleKeyInfo info = Console.ReadKey();

			if (info.Key == ConsoleKey.LeftArrow)	{ return MoveDirection.Left; }
			if (info.Key == ConsoleKey.RightArrow)	{ return MoveDirection.Right; }
			if (info.Key == ConsoleKey.DownArrow)	{ return MoveDirection.Down; }
			if (info.Key == ConsoleKey.UpArrow)		{ return MoveDirection.Up; }

			return MoveDirection.None;
		}
	}
}