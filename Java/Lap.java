import java.util.ArrayList; 
import java.util.Iterator;

public class Lap {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("Ferrari");
        cars.add("Roll Royce");

        Iterator<String> it = cars.iterator();


        System.out.println(it.next());
        System.out.println(it.next());
        System.out.println(it.next());

        while(it.hasNext()) {
            System.out.println(it.next());
          }

        
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        numbers.add(12);
        numbers.add(8);
        numbers.add(2);
        numbers.add(23);
        Iterator<Integer> it1 = numbers.iterator();

          while(it1.hasNext()) {
            int i = it1.next();
            if(i < 10) {
              it1.remove();
            }
          }
          System.out.println(numbers);

    }
}
