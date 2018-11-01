public class Recursion {
    public static void main(String args[]) {
        System.out.println(fibonacci(5));
    }

    public static int fibonacci(int n) {
        // Base case
        if (n == 0) {
            return 0;
        }

        if (n == 1) {
            return 1;
        }

        // Recursive call
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static int factorial (int n) {
        if (n == 0) {
            return 1;
        }

        return n * factorial(n - 1);
    }

    public static int nPaths(int x, int y) {
        if (x == 0 && y == 0) {
            return 1;
        }

        if (x < 0 || y < 0) {
            return 0;
        }

        return nPaths(x - 1, y) + nPaths(x, y - 1);
    }
}
