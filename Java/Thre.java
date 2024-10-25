public class Thre implements Runnable {
    public static void main(String[] args) {
        Thre obj = new Thre();
        Thread thread = new Thread(obj);
        thread.start();
        System.out.println("This code is outside of thread.");
    }

    public void run() {
        System.out.println("This code is running in thread.");
    }
}