import java.awt.Point;
import java.awt.Rectangle;
import java.util.Scanner;

public class Hello {
    public static void printMultiples(int n) {
        int i = 1;
        while (i <= 10) {
            if(n * i < 10) {
                System.out.print(n * i  + "  ");
                i++;
            } else {
                System.out.print(n * i  + " ");
                i++;
            }
            
        }
        System.out.println("");
    }

    public static void printMultTable() {
        int n = 1;
        while (n <= 10) {
            printMultiples(n);
            n++;
        }
    }

    public static void printCharAt(String s) {
        for (int i = 0; i < s.length(); i++) {
            System.out.print(s.charAt(i));
        }
    }

    public static int printIndexOf(String s, char c) {
        System.out.println("");
        int n = s.indexOf(c, 5); // bat dau tim kiem tu vi tri thu n
        return n;
    }

    public static void printToUpperCase(String s) {
        System.out.println(s.toUpperCase());
    }
    
    public static void printToLowerCase(String s) {
        System.out.println(s.toLowerCase());
    }

    public static int printEquals(String s1, String s2) {
        return s1.equals(s2)? 1 : 0; // bang 1 neu s1 giong s2
    }

    public static int printCompareTo(String s1, String s2) {
        return s1.compareTo(s2); // bang 0 neu s1 giong s2, <0 neu s1 xep truoc, >0 neu s2 xep truoc
    }

    public static void printPoint(Point p) {
        System.out.println("P(" + p.x + "," + p.y+ ")");
    }
    
    public static void printRectangle(Rectangle box) {
        System.out.println("R(x = " + box.x + ", y = " + box.y + ", width = " + box.width + ", heigth = " + box.height + ")");
    }

    public static void moveRectangle(Rectangle box, int dx, int dy) {
        box.x = box.x + dx;
        box.y = box.y + dy;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //int a = sc.nextInt();
        //System.out.println(a);
    
        printMultTable();
        String s = "Hello, World!";
        String s2 = "Hello, World!";
        printCharAt(s);
        System.out.println(printIndexOf(s, 'o'));
        printToUpperCase(s);
        printToLowerCase(s);
        System.out.println(printEquals(s, s2));


        Point blank = new Point(3,4);
        int x = blank.x;
        System.out.println(x);
        printPoint(blank);
        System.out.println(blank);

        Rectangle box = new Rectangle(0, 0, 100, 200);
        printRectangle(box);
        moveRectangle(box, 100, 200);
        box.translate(-100, -200); // tuong tu nhu ham moveRectangle()
        box.grow(50,50);
        System.out.println(box);
        sc.close();
    }
}



