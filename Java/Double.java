class OuterClass{
    int x = 10;

    class InnerClass{ 
        /*  dung private lop ben ngoai khong the truy cap duoc
        * dung static lop ben ngoai co the truy cap ma kh can tao doi tuong
         */
        int y = 23;

        //truy cap lop ben ngoai tu lop ben trong
        public int myInnerMethod()
        {
            return x;
        }
    }
}

public class Double{
    public static void main(String[] args) {
        OuterClass myOuter = new OuterClass();
        OuterClass.InnerClass myInner = myOuter.new InnerClass();
        System.out.println(myOuter.x + " " + myInner.y);
        
        int X = myInner.myInnerMethod();

        System.out.println(X);
    }
}