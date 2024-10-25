import java.util.Scanner;


public class quet {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner quet = new Scanner(System.in);
        System.out.println(" Enter your name");

        String username = quet.nextLine();
        int age = quet.nextInt();
        double salary = quet.nextDouble();

        System.out.println("Your name is: " + username);
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);
    }
    
}
