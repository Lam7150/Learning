/**
 * Lam Tran
 * 2017
 * 
 * Picture Printer
 * Given an ascii picture in a txt file, prints it out in the console
 */

#include <cs50.h>
#include <stdio.h>
// needs to be fixed 

int main (void)
{
    char line[50];

    FILE* picture = fopen("mickey.txt", "r");
    FILE* out = fopen("out.txt", "w");

    while (fread(line, sizeof(char), 50, picture) == 50)
    {
        printf("System.out.println('%s')\n", line);
    }

    fclose(picture);
}