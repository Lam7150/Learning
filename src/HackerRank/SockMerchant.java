package HackerRank;
import java.util.HashMap;
import java.util.Map;

public class SockMerchant {
    /**
     * John works at a clothing store. He has a large pile of socks that he must pair by color for sale.
     * Given an array of integers representing the color of each sock, determine how many pairs of socks with matching
     * colors there are.
     * For example, there are n = 7 socks with colors [1,2,1,2,1,3,2]. There is one pair of color 1 and one of color 2.
     * There are three odd socks left, one of each color. The number of pairs is 2.
     *
     * @param n the number of socks in the pile.
     * @param ar the colors of each sock.
     * @return the total number of matching pairs of socks that John can sell.
     */
    public static int sockMerchant(int n, int[] ar) {
        HashMap<Integer, Integer> socks = new HashMap<>();
        int pairs = 0;

        // Putting socks into hashmap
        for(int color : ar) {
            socks.put(color, socks.getOrDefault(color, 0) + 1);
        }

        // Counting pairs
        for (Map.Entry<Integer, Integer> sock : socks.entrySet()) {
            pairs += sock.getValue() / 2;
        }

        return pairs;
    }
}
