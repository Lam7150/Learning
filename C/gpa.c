/**
 * Lam Tran
 * 2015
 * 
 * GPA Calculator
 * Calculates the GPA of a student from CHS
 */

#include <stdio.h>

//Declaring functions
int GetPositiveInt(void);
float apgpa(void);

int main(void)
{
    //Declaring float GPA, will contain final GPA
    float GPA = 0;
    int f = 0; //Number of full year courses, will come into play at final GPA calculation
    
    //Asking user for number of full-year classes
    printf("Hi! Welcome to the CHS student GPA calculator!\n");
    printf("Let's start with full-year courses.\n");
    
    //Calculating GPA for AP Classes
    printf("How many APs are you taking?\n");
    int c = GetPositiveInt(); //Counts classes
    if (c > 0)
    {
        printf("What are your grades in the class(es)?\n");
        for (int i = 0; i < c; i++) //Calculating GPA for AP classes
            GPA += apgpa();
        f += c; //Adds to the counter for full year courses
    }
    
    //Calculating GPA for Honors Classes
    printf("Honors?\n");
    c = GetPositiveInt();
    if (c > 0)
    {
        printf("What are your grades in the class(es)?\n");
        for (int i = 0; i < c; i++) //Calculating GPA for Honors classes
            GPA += apgpa() - 0.4;
        f += c; //Adds to the counter for full year courses
    }
    
    //Calculating GPA for H2 Classes
    printf("H2?\n");
    c = GetPositiveInt();
    if (c > 0)
    {
        printf("What are your grades in the class(es)?\n");
        for (int i = 0; i < c; i++) //Calculating GPA for H2 classes
            GPA += apgpa() - 1;
        f += c; //Adds to the counter for full year courses
    }

    //Calculating GPA for H3 classes
    printf("H3?\n");
    c = GetPositiveInt();
    if (c > 0)
    {
        printf("What are your grades in the class(es)?\n");
        for (int i = 0; i < c; i++) //Calculating GPA for H3 classes
            GPA += apgpa() - 1.4;
        f += c; //Adds to the counter for full year courses
    }
    
    //Asking user for number of half-year classes
    printf("How many half-year courses are you taking?\n");
    int h = GetPositiveInt(); //Number of half-year classes, will come into play at final GPA calculation
    if (h > 0)
    {
        printf("What are your grades in the class(es)?\n");
        for (int i = 0; i < h; i++) //Calculating GPA for half-year classes (always h2)
            GPA += (apgpa() - 1) / 2; 
    }
    
    //Calculating final GPA
    GPA = GPA / ((f * 2) + h);
    
    //Printing final GPA
    printf("%.5f\n", GPA);
    return 0;
}

//Gets a positive int from user
int GetPositiveInt(void)
{
    int n;
    do
        scanf("%i", &n);
    while (n < 0 && n <= 100);
    return n;
}

//Calculates GPA for an AP class
float apgpa(void)
{
    int n = GetPositiveInt();
    float g = 0;
    
    if (n >= 99)
        g = (4.7 - ((100 - n) * 0.1)) * 2;
    else if (n >= 94)
        g = (4.55 - ((98 - n) * 0.05)) * 2;
    else if (n >= 91)
        g = (4.3 - ((93 - n) * 0.1)) * 2;
    else if (n >= 88)
        g = (4.05 - ((90 - n) * 0.05)) * 2;
    else if (n == 87)
        g = 3.85 * 2;
    else if (n >= 60)
        g = (3.8 - ((86 - n) * 0.1)) * 2;
    else
        g = 0;
        
    return g;
}