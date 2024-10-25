import java.util.ArrayList;
import java.util.function.Consumer;

interface StringFunction {
    String run(String str);
  }


public class Lambda {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        numbers.add(4);
        numbers.add(7);
        numbers.add(9);
        numbers.add(1);
        numbers.add(8);
        numbers.forEach( (n) -> {System.out.println(n);} );

        Consumer<Integer> method = (n) -> { System.out.println(n);};
        numbers.forEach(method);


        StringFunction exclaim = (s) -> s + "!";
    StringFunction ask = (s) -> s + "?";
    printFormatted("Hello", exclaim);
    printFormatted("Hello", ask);
    }



    public static void printFormatted(String str, StringFunction format) {
        String result = format.run(str);
        System.out.println(result);}
    
}


