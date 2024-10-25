import java.util.HashMap;
import java.util.HashSet;

public class BangBam {
    public static void main(String[] args) {
        HashMap<String,String> capitalCities = new HashMap<String,String>();

        capitalCities.put("England", "London");
        capitalCities.put("Germany", "Berlin");
        capitalCities.put("Norway", "Oslo");
        capitalCities.put("USA", "Washington DC");
        System.out.println(capitalCities);

        String get = capitalCities.get("England");
        //remove() de xoa 1 gtri, clear() xoa tat
        System.out.println(get);

        int size = capitalCities.size();
        System.out.println(size);

        //dung keyset() neu muon khoa hoac values() neu muon gia tri
        for ( String i : capitalCities.values()) {
            System.out.println(i);
        }


        for (String i : capitalCities.keySet()) {
            System.out.println("Key: " + i + ", Values: " + capitalCities.get(i));
        }



    HashSet<String> cars = new HashSet<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Ford");
        cars.add("BMW");
        cars.add("Mazda");
        System.out.println(cars);

        boolean Z = cars.contains("BMW"); // tra ve true neu ton tai gia tri
        System.out.println(Z);

        HashSet<Integer> numbers = new HashSet<Integer>();

    // Add values to the set
    numbers.add(4);
    numbers.add(7);
    numbers.add(8);

    // Show which numbers between 1 and 10 are in the set
    for(int i = 1; i <= 10; i++) {
      if(numbers.contains(i)) {
        System.out.println(i + " was found in the set.");
      } else {
        System.out.println(i + " was not found in the set.");
      }
    }


    }
}
