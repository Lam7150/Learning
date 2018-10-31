#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How much does the item cost?\n");
    float n = GetInt();
    float m = 0;
    
    printf("How many dividends will be taxed?\n");
    int d = GetInt();
    
    printf("The total tax straight up is %.3f\n", n * 0.05);
    for (int i = 0; i < d; i++)
    {
        m += n / d * 0.05;
    }
    
    printf("The total tax when split %i times is %.3f\n", d, m);
}