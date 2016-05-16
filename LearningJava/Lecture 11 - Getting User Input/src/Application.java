/**
 * Created by ellis on 5/15/2016.
 */

import java.util.Scanner;

public class Application {
    public static void main(String[] args){
        Scanner userInput = new Scanner(System.in); // Creating a new scanner for user input

        // Outputting the prompt
        System.out.print("Enter something: ");

        // Wait for the user to input some text
        String line = userInput.nextLine();

        // Printing out what they said
        System.out.println("You entered: " + line);
    }
}
