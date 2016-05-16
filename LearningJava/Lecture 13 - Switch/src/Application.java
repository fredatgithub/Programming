/**
 * Created by ellis on 5/15/2016.
 */

import java.util.Scanner;

public class Application {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);

        System.out.print("Please enter a command: ");
        String text = userInput.nextLine();

        boolean on = false; // Boolean that holds if power is on or off

        // This is available only when the system is not on
        while(!on) {
            switch (text) {
                case "Start":
                    System.out.println("Console started.");
                    on = true;
                    break;
            }
        }

        // This is available when the system is on
        while (on) {
            System.out.print("Please enter a command: ");
            text = userInput.nextLine();

            switch (text) {
                case "Help":
                    System.out.println("Commands: Exit, Stop, Help, Info.");
                    break;

                case "Info":
                    System.out.println("Created by ellis on 5/15/2016.");
                    break;

                case "Exit":
                    System.out.println("Exiting.");
                    on = false;
                    break;

                case "Stop":
                    System.out.println("Console stopped.");
                    on = false;
                    break;
            }
        }
    }
}
