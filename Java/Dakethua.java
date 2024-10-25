interface First {
    public void method1();
}

interface Second {
    public void method2();
}


class Double implements First, Second {
    @Override
    public void method1()
    {
        System.out.println("Hehe");
    }


    @Override
    public void method2()
    {
        System.out.println("Hihi");
    }
}


public class Dakethua {
    public static void main(String[] args) {
        Double double1 = new Double();
        double1.method1();
        double1.method2();
    }
}
