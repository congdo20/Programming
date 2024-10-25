class Vehicle {
    protected String brand = "Ford";
    public void honk()
    {
        System.out.println("Tuut,tuut!");
    }

    public String getBrand()
    {
        return brand;
    }

}

//khong the ke thua tu class khai bao final
class Car extends Vehicle {
    protected String modelName = "Mustang";
}



public class Demo{
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.honk();
        String Brand = myCar.getBrand();
        System.out.println(Brand);
        myCar.brand = "Rolls Royce";
        myCar.modelName = "Cullinan";
        System.out.println(myCar.brand + " " + myCar.modelName);
    }
}