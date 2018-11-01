/**
 * Recursion module
 */

public class Recursion {
    public static void main(String args[]) {
        System.out.println(fibonacci(5));
    }

    /**
     * Returns number of specified index in the fibonacci sequence.
     *
     * @param n the nth number in the fibonacci sequence requested
     * @return fibonacci value
     */
    public static int fibonacci(int n) {
        // Base cases
        if (n == 0) {
            return 0;
        }

        if (n == 1) {
            return 1;
        }

        // Recursive call
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    /**
     * Calculates the factorial of a given number.
     *
     * @param n number of factorial to be calculated
     * @return n factorial
     */
    public static int factorial(int n) {
        // Base case
        if (n == 0) {
            return 1;
        }

        // Recursive call
        return n * factorial(n - 1);
    }

    /**
     * Calculates the number of possible paths from origin to specified point in graph.
     *
     * @param x x coordinate to reach
     * @param y y coordinate to reach
     * @return number of possible paths
     */
    public static int nPaths(int x, int y) {
        // Base case
        if (x == 0 && y == 0) {
            return 1;
        }

        // Ensuring paths are within bounds
        if (x < 0 || y < 0) {
            return 0;
        }

        // Recursive call
        return nPaths(x - 1, y) + nPaths(x, y - 1);
    }
}
