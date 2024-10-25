public class TryCatch {

    static void checkAge(int age){
        if(age < 18) {
            throw new ArithmeticException("Access denied.");
        } else {
            System.out.println(" Access Granted.");
        }
    }


    public static void main(String[] args) {
        try {
            int[] myNumbers= {1,2,3,4,5,6,7,8,9};
            System.out.println(myNumbers[10]);
        } catch (Exception e) {
            System.out.println("Something went wrong.");
        } finally {
            System.out.println("The \"try catch \" is finished.");
        }


        checkAge(23);


    }
}
