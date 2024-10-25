
public class Enum {


    enum Level {
        LOW,
        MEDIUM,
        HIGH
    }

    public static void main(String[] args) {
    
        Level volumn = Level.MEDIUM;
        System.out.println(volumn);
        switch(volumn) {
            case LOW:
            System.out.println("LOW");
            break;

            case MEDIUM:
            System.out.println("MEDIUM");
            break;

            case HIGH:
            System.out.println("HIGH");
            break;

            default:
            System.out.println("NOPE");
        }


        for ( Level Vo : Level.values()){
            System.out.print(Vo + " ");
        }

    }
}
