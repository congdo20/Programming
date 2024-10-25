import mypackage.*;

class Core implements mycontants, myinterface{

    public void add (int x, int y) {
        System.out.println(x + y);
    }

    public void volume(int x, int y, int z) {
        System.out.println(x + y + z);
    }

    public static final double price = 1450.00;

    public static final int counter = 5;

    public static void main(String[] args) {
        Core core = new Core();
        core.add(3,7);
        core.volume(1,3,6);
        //System.out.println("Your salary is: " + core.price * core.counter + "$ per month.");

        mypackage.Calculate calculate = new Calculate();

        System.out.println(calculate.add(3,7));

        String name = "Java Core";
        boolean startwith = name.startsWith("Java"); // kiem tra xem co bat dau bang java khong
        System.out.println(startwith);

        char language[] = {'L', 'a', 'n', 'g', 'u', 'a', 'g', 'e'};
        String choose = String.copyValueOf(language, 0, 3); // sao chep cac ky tu sang mang khac
        System.out.println(choose);

        String Book = "Book";
        char chooseArray[] = Book.toCharArray(); // chuyen string thanh chuoi ky tu
        System.out.println(chooseArray);

        String space = "    Space   ";
        space = space.trim(); // xoa khoang trang
        System.out.println(space);

        StringBuffer buffer = new StringBuffer(space);
        buffer = buffer.append(Book); // noi 2 chuoi
        System.out.println(buffer);

        buffer = buffer.insert(5, " "); // chen vao vi tri 
        System.out.println(buffer);

        buffer.setCharAt(5, '-'); // chuyen ky tu tai vi tri 5 thanh '-'
        System.out.println(buffer);
        buffer.setLength(5); // resize buffer
        System.out.println(buffer);

        char newBuffer[] = new char[100];
        buffer.getChars(0, 5, newBuffer, 3); // chon ky tu tu 1 string sang mang ky tu
        System.out.println(newBuffer);

        buffer.reverse(); // dao nguoc chuoi
        System.out.println(buffer);

        /* 
        Runtime r = Runtime.getRuntime();
        // Lấy bộ nhớ trống và tổng bộ nhớ trước khi gọi gc
        long freemem = r.freeMemory();
        long totalmem = r.totalMemory();

        // In ra kết quả
        System.out.println("Bộ nhớ trống trước khi gc: " + freemem);
        System.out.println("Tổng bộ nhớ trước khi gc: " + totalmem);

        // Yêu cầu JVM thực hiện thu gom rác
        r.gc();

        // Lấy lại bộ nhớ trống sau khi gọi gc
        freemem = r.freeMemory();

        // In ra bộ nhớ sau khi thu gom rác
        System.out.println("Bộ nhớ trống sau khi gc: " + freemem);
        */
        
    }
}
    
