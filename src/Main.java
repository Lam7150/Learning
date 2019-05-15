/**
 * Lam Tran
 * November 2018 - Present
 *
 * Main module
 */
import java.util.Arrays;

public class Main {
    /**
     * Main class to test all java modules created
     * @param unused
     */
    public static void main(String unused[]) {
        System.out.println(Recursion.edgesOnHypercube(7) / 2);
    }

    /**
     * Recursion test module
     */
    public static void recursion() {
        System.out.println("The 5th number of the fibonacci sequence is " + Recursion.fibonacci(5));
        System.out.println("The factorial of 4 is " + Recursion.factorial(4));
        System.out.println("The number of possible paths from (0,0) to (3,4) is " + Recursion.nPaths(3, 4));
    }

    /**
     * Algorithms test module
     */
    public static void algorithms() {
        int[] unsorted = {-1, 2, 9, 4, 3, 7, 0};

        System.out.println(Arrays.toString(Algorithms.insertionSort(unsorted)));
    }
}