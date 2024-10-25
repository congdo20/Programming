public class Time {

    int hour, minute;
    double second;

    public Time() {
        this.hour = 0;
        this.minute = 0;
        this.second = 0.0;
    }

    public Time(int hour, int minute, double second) {
        this.hour = hour ;
        this.minute = minute;
        this.second = second;
    }

    /*
    @Override
    public String toString() {
        return String.format("%02d:%02d:%06.3f", hour, minute, second);
    }
    */

    public static void printTime(Time t) {
        System.out.println(t.hour + ":" + t.minute + ":" + t.second);
    }

    public static void main(String[] args) {
        Time t1 = new Time();
        t1.hour = 11;
        t1.minute = 8;
        t1.second = 3.14159;
        printTime(t1);

        Time t2 = new  Time (11, 8, 3.14159);
        System.out.println(t2);

        
    }
}