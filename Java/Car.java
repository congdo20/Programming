class Vehicle {
    protected String brand = "Ford";
    public void honk()
    {
        System.out.println("Tuut,tuut!");
    }


}

//khong the ke thua tu class khai bao final
class Car extends Vehicle {
    private String modelName = "Mustang";

    public static void main(String[] args){
        Car car1 = new Car();
        System.out.println(car1.brand + " " + car1.modelName);
        car1.honk();
    }
}
