#include <cs50.h>
#include <stdio.h>
// fuck it mask off doesnt work
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