/**
 * Created by ellis on 5/15/2016.
 */

import java.util.Scanner;

public class Application {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int value;
        do {
            System.out.print("Print a number: ");
            value = scanner.nextInt();

            if(value == 5){
                System.out.println("You got 5!");
            }
        }while(value != 5);
    }
}
