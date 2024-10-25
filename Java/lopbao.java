import java.util.ArrayList;

public class lopbao {
    public static void main(String[] args){
        ArrayList<String> myNumbers = new ArrayList<String>();
        
        Integer myInt = 100;
        Character myChar = 'A';

        System.out.println(myInt.intValue());
        System.out.println(myChar.charValue());


        String myString = myInt.toString();
        System.out.println(myString);
        System.out.println(myString.length());
    }
}
