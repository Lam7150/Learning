//Magic 8 ball program

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    char* input;
    printf("What would you like to know?\n");
    scanf("%s", &input);
    srand(time(NULL));
    int r = rand() % 2;
    if (r == 1)
        printf("Yes\n");
    else
        printf("No\n");
}