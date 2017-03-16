using System;
using System.IO;

namespace EllisBarnes
{
	class Text : IFileWriter
	{
		public string Extension
		{
			get
			{
				return ".txt";
			}
		}

		public void Write()
		{
			string[] arrayOfInformation = new string[2];
			arrayOfInformation[0] = "This is line 1";
			arrayOfInformation[1] = "This is line 2";
			File.WriteAllLines("./test2.txt", arrayOfInformation);
		}

		public void Write(string input)
		{
			File.WriteAllText("../../test1" + this.Extension, input);
		}

		public void Write(string input, string filename)
		{
			throw new NotImplementedException();
		}
	}
}
