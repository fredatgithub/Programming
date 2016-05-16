/**
 * Created by ellis on 5/15/2016.
 */
public class Application {
    public static void main(String[] args){
        int value = 0;
        boolean loop;
        while(value < 11){
            System.out.println("Value = " + value);

            value++;

            if(value == 11){
                value = 0;
            }
        }
    }
}
