interface Animal {
    public void animalSound();
    public void sleep();
}

class Pig implements Animal {
    @Override
    public void animalSound() {
        System.out.println("The pig says: Wee Wee!");
    }
    @Override
    public void sleep() {
        System.out.println("Zzzzzzz!");
    }
}

// lop giao dien cung khong the tao duoc 1 doi tuong
// can phai ghi de phuong thuc  

public class Interface {
    public static void main(String[] args) {
        Pig Pig1 = new Pig();
        Pig1.animalSound();
        Pig1.sleep();
    }
}
