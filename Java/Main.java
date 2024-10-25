

public class Main {
    
    int x = 10; //khong muon bi ghi de dung final
    int y ;


    static void method1()
    {
        System.out.println("Hehe");
    }

    public void method2()
    {
        System.out.println("hihi");
    }

    public void fullThrottle() {
        System.out.println("Going fast.");
    }

    public void speed(int speed) {
        System.out.println("Max speed is: " + speed);
    }


    public Main(int x) // tao 1 class constructor(ham tao) cho ham Main
    {
        y = x;
    }

    public static void main(String[] args) {
    
        method1();
        // method2(); khong the chay public method khi chua tao 1 doi tuong
        
        Main obj = new Main(23);
        System.out.println(obj.y);

        /*
         He Obj = new He();
        System.out.println(Obj.fname);
        System.out.println(Obj.age);
         */
       
         Person obj1 = new Person();

        obj1.setName("Do dz");

         System.out.println(obj1.getName());
    

        /*
        Scanner obj2 = new Scanner(System.in);
        System.out.println("Enter your name");

        String username = obj2.nextLine();
        System.out.println("Name is: " + username);
         */
        


    }
}



/*
abstract class Hi {
    public String fname = "Do dz";
    public int age = 23;
    public abstract void study();
}

class He extends Hi {
    public int Graduation = 2025;
    public void study ()
    {
        System.out.println("He");
    }
}
 */
