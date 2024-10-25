import java.util.Random;
public class Array {   

    public static int randomInt(int a, int b) {
        Random rand = new Random();
        return rand.nextInt(b - a) + a;
    }
    public static int[] randomArray(int n) {
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = randomInt(0, 100);
        }
        return arr;
    }
    

    public static void main(String[] args) {
        double[] a = new double[4];
        int i =  0;
        while (i < 4) {
            a[i] += i + (i + 1.0) / 10.0;
            i++;
        }
        double[] b = new double[4];
        i = 0;
        while(i < 4) {
            b[i] = a[i];
            i++;
        }
        i = 0;
        while(i < 4) {
            System.out.println(b[i]);
            i++;
        }

        int[] arr = randomArray(10);
        for (i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
