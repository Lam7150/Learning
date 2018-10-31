/* Tests collatz conjecture: Every number will eventually return to 1 by doing the following
                                 If n = 1, stop;
                                 if n is even, repeat this process with n/2;
                                 if n is odd, repeat this process with 3n + 1; */
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n;
    printf("What number yo: ");
    scanf("%i", &n);
    printf("It takes %i steps to get 1 from %i using collatz's conjecture.\n", collatz(n), n);
}

int collatz (int n)
{
    if (n == 1)
        return 0;
    else if (n % 2 == 0)
        return (1 + collatz(n/2));
    else 
        return (1 + collatz(3*n + 1));
}