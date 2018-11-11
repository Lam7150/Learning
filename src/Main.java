/**
 * Lam Tran
 * November 2018 - Present
 *
 * Main module
 */
import java.util.Arrays;

public class Main {
    public static void main(String args[]) {
        algorithms();
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
        int[] unsorted = {2, 9, 4, 3, 7};

        System.out.println(Arrays.toString(Algorithms.bubbleSort(unsorted)));
    }
}