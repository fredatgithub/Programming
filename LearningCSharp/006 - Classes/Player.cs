namespace EllisBarnes
{
	class Player
	{
		// Class variables
		private string m_name;
		private int m_score;
		private int m_lives;

		// Constructors
		public Player(string name)
		{
			this.m_name = name;
		}

		// Getters and Setters
		public string Name
		{
			get
			{
				return this.m_name;
			}
			set
			{
				this.m_name = value;
			}
		}

		public int Score
		{
			get
			{
				return this.m_score;
			}
			set
			{
				this.m_score = value;
			}
		}

		public int Lives
		{
			get
			{
				return this.m_lives;
			}
			set
			{
				this.m_lives = value;
			}
		}


		// Other functions
		public void AddPoints(int points)
		{
			this.m_score += points;
		}

		public void Hurt()
		{
			this.m_lives--;
		}

		public void Kill()
		{
			// Make sure to take all the lives
			if(this.m_lives > 0)
			{
				this.m_lives--;
			}
		}
	}
}
