import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;


public class Mang {
    /**
     * @param args
     */
    public static void main(String[] args){

    ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("Ferrari");
        cars.add("Toyota");
        cars.add(0, "Rolls Royce"); // them tai vi tri dau tien
        System.out.println(cars);

        cars.set(1,"BMW");
        cars.remove(3); // clear() xoa tat ca
        System.out.println(cars);
        String myCar = cars.get(0);// truy cap 1 chi muc
        System.out.println(myCar);

        int size = cars.size(); // tra ve kich thuoc mang
        System.out.println(size);


        for (int i = 0; i < cars.size(); i++)
        {
            System.out.println(cars.get(i));
        }

        for(String i : cars){
            System.out.println(i);
        }


    ArrayList<Integer> numbers = new ArrayList<Integer>();
    for (int i = 0; i < 10; i++) {
        numbers.add(i);        
    }

    for ( int i : numbers){
        System.out.println(i);
    }

    Collections.sort(numbers);
    for (int i : numbers){
        System.out.println(i);
    }


    LinkedList<String> car1 = new LinkedList<String>();
    car1.add("Volvo");
    car1.add("Ferrari");
    car1.add("Rolls Royce");
    car1.addLast("BMW");
    System.out.println(car1);

    String first = car1.getFirst();
    System.out.println(first);

    Collections.sort(car1);
    System.out.println(car1);

    Collections.sort(car1, Collections.reverseOrder());
    System.out.println(car1);

    
    
    }
}
