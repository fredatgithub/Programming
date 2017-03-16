namespace EllisBarnes
{
	public interface IFileWriter
	{
		/// <summary>
		/// Extension of the file. Will be assigned when the program creates a new FileWriter.
		/// </summary>
		string Extension { get; }

		/// <summary>
		/// Function that user inputs text into the arguments, then it will be printed out into a document.
		/// </summary>
		/// <param name="input">User generated text.</param>
		void Write(string input);

		/// <summary>
		/// Function that will write the file to a specific path with the specified extension.
		/// </summary>
		/// <param name="filename">Name of the file the will be outputted.</param>
		void Write(string input, string filename);
	}
}
