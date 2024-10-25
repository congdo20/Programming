public class Begin {
    public static void main(String[] args) {

      final int x = 5000;
      double myDouble = 5.6789;
      double Double = x;
      int myInt = (int ) myDouble;
      String hihi = "Hello ";
      String hehe = "World!";
      hihi = hihi.toLowerCase(); // viet thuong tat ca cac chu cai
      System.out.println(hihi);
      hihi = hihi.toUpperCase();  // viet hoa tat ca cac chu cai
      System.out.println(hihi);

      int lengthHihi = hihi.length(); // tra ve chieu dai cua chuoi ky tu
      int indexHihi = hihi.indexOf('H'); // tra ve vi tri xuat hien lan dau tien cua tu ma ban tim kiem
      
      System.out.println(indexHihi);

      System.out.println(hihi.concat(hehe)); // noi 2 String

      System.out.println(hihi + "World!");
      System.out.print(hihi + "Do dz");
      System.out.println(", your salary is: " + x + "$");
      System.out.println(myInt);
      System.out.println(Double);
      System.out.println(x > myDouble); // tra ve gia tri true neu dung , false neu sai
      System.out.println(lengthHihi);

      if( hihi.length() + 1 > hehe.length() )
      {

      System.out.println("Hello Dodz!");

      }

     myMethod("Do Dz", 23);
     checkAge(23);

     int l = method(1,2);
     float m = method(2.2f, 3.3f);
     double n = method(2222.11 , 3333.22);
     System.out.println(l + " " + m + " . " + n);

     int o = dequy ( 23);
     System.out.println(o);
     int p = dequy1(0,23);
     System.out.println(p);

     

     // su dung 1 lop khac
     Main myObj1 = new Main(23);
     Main myObj2 = new Main(23);

     myObj1.x = 100;

     myObj1.method2(); // co the chay public method 

     myObj1.fullThrottle();
     myObj1.speed(150);

     System.out.println("mark: " + myObj1.x + ", old:"+ myObj1.y);
     System.out.println(myObj2.x);

  }





  static void myMethod(String name, int old)
  {
    System.out.println("My name is: " + name +", " + old + " years old");
  }

  static void checkAge (int age)
  {
    if (age > 18)
    System.out.println("ban da truong thanh");
    else
    System.out.println("Ban la tre con");
  }

  static int method (int x, int y)
  {
    return x + y;
  }

  static float method (float x, float y)
  {
    return x + y;
  }

  static double method(double x, double y)
  {
    return x + y;
  }


  static int  dequy (int n)
  {
    if (n > 0 )
    return n + dequy (n - 1);
    else 
    return 0;
  }

  static int dequy1(int start, int end)
  {
    if ( end > start )
    return end + dequy1(start, end - 1);
    else 
    return end;
  }

}
