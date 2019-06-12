package HackerRank;
import java.util.List;
import java.util.ArrayList;

public class CompareTheTriplets {
    public static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
        List<Integer> ratings = new ArrayList<>();
        ratings.add(0);
        ratings.add(0);

        for (int i = 0; i < a.size(); i++) {
            if (a.get(i) > b.get(i)) {
                ratings.set(0, ratings.get(0) + 1);
            } else if (a.get(i) < b.get(i)) {
                ratings.set(1, ratings.get(1) + 1);
            }
        }

        return ratings;
    }
}