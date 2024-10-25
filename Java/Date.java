
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;


public class Date {
    public static void main(String[] args) {

        LocalDate time = LocalDate.now();
        System.out.println(time);
        

        LocalDateTime obj = LocalDateTime.now();

        System.out.println("Before: " + obj);

        DateTimeFormatter formatObj = DateTimeFormatter.ofPattern("yyyy-MM-dd");

        String formatNew = obj.format(formatObj);
        System.out.println("After: " + formatNew);
    }
}
