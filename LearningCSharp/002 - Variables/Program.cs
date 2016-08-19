using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Variables
{

    /// <summary>
    /// Demonstrates integer data types
    /// </summary>
    class Program
    {

        /// <summary>
        /// Demonstrates integer data types
        /// </summary>
        /// <param name="args">Command-line args</param>
        static void Main(string[] args)
        {
            // Declare integer variable and constant
            int totalSecondsPlayed = 60;
            const int SECONDS_PER_MINUTE = 60;

            int minutes = totalSecondsPlayed / SECONDS_PER_MINUTE;
            int seconds = totalSecondsPlayed % SECONDS_PER_MINUTE;

            Console.WriteLine(minutes + ":" + seconds);
            Console.ReadLine();
        }
    }
}
