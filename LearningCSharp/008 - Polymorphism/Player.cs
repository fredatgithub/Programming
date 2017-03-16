namespace EllisBarnes
{
	public enum MoveDirection { None, Left, Right, Up, Down};

	class Player
	{
		public virtual MoveDirection MakeMove()
		{
			return MoveDirection.Left;
		}

		public string GetDirection()
		{
			if (this.MakeMove() == MoveDirection.Left) { return "Left"; }
			if (this.MakeMove() == MoveDirection.Right) { return "Right"; }
			if (this.MakeMove() == MoveDirection.Up) { return "Up"; }
			if (this.MakeMove() == MoveDirection.Down) { return "Down"; }
			else return "None";
		}
	}
}