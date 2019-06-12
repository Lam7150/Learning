import HackerRank.CompareTheTriplets;
import org.junit.BeforeClass;
import org.junit.Test;
import java.util.List;
import java.util.ArrayList;
import static org.junit.Assert.assertEquals;

public class CompareTheTripletsTest {
    private static List<Integer> alice = new ArrayList<>();
    private static List<Integer> bob = new ArrayList<>();
    private static List<Integer> expected = new ArrayList<>();

    @BeforeClass
    public static void setUp() {
        alice.add(100);
        alice.add(74);
        alice.add(2);

        bob.add(99);
        bob.add(50);
        bob.add(1);

        expected.add(3);
        expected.add(0);
    }

    @Test
    public void testAliceWinsAll() {
        assertEquals(CompareTheTriplets.compareTriplets(alice, bob), expected);
    }
}
