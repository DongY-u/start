import java.util.ArrayList;
import java.util.List;
import java.util.Random;

class Card
{
    int rank;
    String color;

    public Card(int rank, String color)
    {
        this.rank = rank;
        this.color = color;
    }

    @Override
    public String toString() {
        // 1 --> A , 11, 12, 13 --> J,Q,K
        String valueStr = null;
        if(rank == 1)
        {
            valueStr = "A";
        }
        else if(rank > 10)
        {
            if(rank == 11)
                valueStr = "J";
            else if(rank == 12)
                valueStr = "Q";
            else if(rank == 13)
                valueStr = "K";
        }
        else
        {
            valueStr = String.valueOf(rank);
        }
        String strArr = "(" + valueStr + ", " + color + " )";
        //return String.format("(%s, %s)", valueStr, color);
        return strArr;

    }
}

public class DeckDemo {
    private static final String colors[] = {"♥","♦","♣","♠"};
    public static List<Card>  creatCard()
    {
        List<Card> deck = new ArrayList<>(52);
        for(int i = 0; i < 4; ++i)
        {
            for(int j = 0; j < 13; ++j)
            {
                Card card = new Card(j + 1, colors[i]);
                deck.add(card);
            }
        }
        return deck;
    }

    public static void shuffle(List<Card> deck)
    {
        Random rand = new Random();
        for(int i = deck.size() - 1; i > 0; --i){

            int pos = rand.nextInt(i);
            swap(deck, i, pos);
        }
    }

    public static void swap(List<Card> deck, int i, int j)
    {
        //int tmp = i;   i = j; j = tmp;
        Card tmp = deck.get(i);
        deck.set(i, deck.get(j));
        deck.set(j, tmp);
    }

    public static void send(List<Card> deck, List<List<Card>> persons,
                            int numberCard, int numberPerson)
    {
        for(int i = 0; i < numberPerson; ++i)
        {
            persons.add(new ArrayList<>());
        }
        for(int i = 0; i < numberCard; ++i)
        {
            for(int j = 0; j < numberPerson; ++j)
            {
                Card card = deck.remove(0);
                persons.get(j).add(card);
            }
        }
    }

    public static void main(String[] args) {
        List<Card> deck = creatCard();
        System.out.println(deck);
        shuffle(deck);
        System.out.println(deck);
        List<List<Card>>  persons = new ArrayList<>();
        send(deck, persons, 5 , 5);
        System.out.println(deck);
        System.out.println(persons.get(0));
        System.out.println(persons.get(1));
        System.out.println(persons.get(2));
        System.out.println(persons.get(3));
        System.out.println(persons.get(4));
    }

}
