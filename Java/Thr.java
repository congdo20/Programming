public class Thr extends Thread {
    public static void main(String[] args) {
        Thr thread = new Thr();
        thread.start();
        System.out.println("This code is outside.");
    }

    public void run() {
        System.out.println("This code running in thread.");
    }
    
}
