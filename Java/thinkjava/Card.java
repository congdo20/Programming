

public class Card {
    int suit, rank;
    
    // constructor1
    public Card() {
        this.suit = 0;
        this.rank = 0;
    }

    //constructor2
    public Card(int suit, int rank) {
        this.suit = suit;
        this.rank = rank;
    }

    // hien thi la bai
    public static void printCard(Card c) {
        String[] suits = {"Clubs", "Diamonds", "Hearts", "Spades"};
        String[] ranks = { "narf", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
        System.out.println(ranks[c.rank] + " of " + suits[c.suit]);
    }

    // kiem tra hai la bai co giong nhau khong
    public static boolean sameCard(Card c1, Card c2) {
        return (c1.suit == c2.suit && c1.rank == c2.rank);
    }

    // so sanh hai la bai
    public static void compareCard(Card c1, Card c2) {
        if (c1.rank > c2.rank) {
            System.out.println("Card 1 lon hon Card 2.");
        } else if(c1.rank < c2.rank) {
            System.out.println("Card 1 nho hon Card 2.");
        } else {
            if (c1.suit == c2.suit) {
                System.out.println("Card 1 va Card 2 tuong dong.");
            } else if ( c1.suit < c2. suit) {
                System.out.println("Card 1 nho hon Card 2.");
            } else {
                System.out.println("Card 1 lon hon Card 2.");
            }
        }
    }

    //khoi tao bo bai
    public static void initCards(Card[] cards) {
        int i = 0;
        for (int suit = 0; suit <= 3; suit++) {
            for (int rank = 1; rank <= 13; rank++) {
                cards[i] = new Card(suit, rank);
                i++;
            }
        }
    }

    //in bo bai
    public static void printCards(Card[] cards) {
        for (int i = 0; i < cards.length; i++) {
            printCard(cards[i]);
        }
    }

    // tim kiem quan bai
    public static int findCard(Card[] cards, Card card) {
        for (int i = 0; i < cards.length; i++) {
            if(sameCard(cards[i], card)) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Card card1 = new Card(3, 11);
        printCard(card1);
        //Card card2 = card1;
        Card card2 = new Card(1, 11);
        printCard(card2);
        if(sameCard(card1, card2)) {
            System.out.println("Card 1 va card 2 tuong dong nhau.");
        }
        compareCard(card1, card2);
        
        Card[] cards = new Card[52];

        initCards(cards);
        printCard(cards[0]);
        printCards(cards);
    }
}
