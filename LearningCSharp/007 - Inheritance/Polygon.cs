namespace EllisBarnes
{
	class Polygon
	{
		protected int	m_NumberOfSides	{ get; set; }
		protected float m_Size			{ get; set; }

		public Polygon()
		{
			m_NumberOfSides = 0;
		}

		public Polygon(int numberOfSides)
		{
			this.m_NumberOfSides	= numberOfSides;
		}

		public string GetInfo(string shape)
		{
			string s = shape + ": \tSides: " + m_NumberOfSides + " \tSize: " + m_Size;
			return s;
		}
	}
}
