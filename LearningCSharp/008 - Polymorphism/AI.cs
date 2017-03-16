using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace EllisBarnes
{
	class AI : Player
	{
		private Random random;

		public AI()
		{
			this.random = new Random();
		}

		public override MoveDirection MakeMove()
		{
			int choice = random.Next(4);

			if (choice == 0) { return MoveDirection.Left; }
			if (choice == 1) { return MoveDirection.Right; }
			if (choice == 2) { return MoveDirection.Down; }
			if (choice == 3) { return MoveDirection.Up; }

			else return MoveDirection.None;
		}
	}
}