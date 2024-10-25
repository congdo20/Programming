abstract class Animal {
    public abstract void animalSound();
    public void sleep() {
        System.out.println("Zzz");
    }
}


class Dog extends Animal {
    @Override
    public void animalSound(){
        System.out.println("The dog say: Bow Wow!");
    }
}


public class Abstract {
    public static void main(String[] args) {
       // Animal newAni = new Animal(); khong the tao 1 doi tuong moi bang lop abstract
        Dog Dog1 = new Dog();
        Dog1.animalSound();
        Dog1.sleep();
    
    }
    
}
