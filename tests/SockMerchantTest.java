import HackerRank.SockMerchant;
import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class SockMerchantTest {
    @Test
    public void test1() {
        int[] socks = {10, 20, 20, 10, 10, 30, 50, 10, 20};
        assertEquals(SockMerchant.sockMerchant(9, socks), 3);
    }
}
