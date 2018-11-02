/**
 * Lam Tran
 * 2016
 * 
 * Slope Calculator
 * Calculates slope of a line given two points and graphs it
 */

#include <cs50.h>
#include <stdio.h>

void Graph(int x, int y)
{
    for(int i = 20; i >= 1; --i)
    {
        if (i % y == 0)
        {
            printf("%i", y * (i / y));
            if (y * (i / y) < 10)
                printf(" ");
            printf("|");
            
            for(int n = 0; n < (x * (i / y) - 1); ++n)
                printf(" ");
            printf("*\n");
        }
        else
            printf("  |\n");
    }
    printf("0  ---------------------\n");
    printf("   1  4   8   12  16  20\n");
}

int SlopeCalc(int a1, int a2)
{
    int m = a2 - a1;
    return (m);
}

void SlopeResult(int x1, int x2, int y1, int y2)
{
    int x, y;
    if (x2 - x1 == 0)
        printf("No slope\n");
    else
    {
        y = SlopeCalc(y1, y2);
        x = SlopeCalc(x1, x2);
        printf("The slope of the line formed by the coordinates is %i/%i\n\n\n", y, x);
        Graph(x, y);
    }
}

int GetInput(void)
{
    int x;
    scanf("%i", &x);
    return (x);
}

int main(void)
{
    int x1, x2, y1, y2, valid = 2;
    
    do
    {
        printf("Please enter the coordinates: ");
        x1 = GetInput();
        y1 = GetInput();
        printf("The coordinates are (%i, %i). Are these correct? If yes, enter 1, if no, enter 2\n", x1, y1);
        scanf("%i", &valid);
    }
    while (valid == 2);
    
    do
    {
        printf("Please enter the coordinates: ");
        x2 = GetInput();
        y2 = GetInput();
        printf("The coordinates are (%i, %i). Are these correct? If yes, enter 1, if no, enter 2\n", x2, y2);
        scanf("%i", &valid);
    }
    while (valid == 2);
    
    SlopeResult(x1, x2, y1, y2);
}