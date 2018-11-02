/**
 * Lam Tran
 * 2016
 * 
 * Tic Tac Toe
 * A program to play Tic Tac Toe!
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Starting screen and instructions
    printf("Welcome to tic tac toe! The board is organized as follows:\n");
    printf("   1   2   3 \n");
    printf(" A   |   |   \n");
    printf("   --------- \n");
    printf(" B   |   |   \n");
    printf("   --------- \n");
    printf(" C   |   |   \n");
    printf("To select fill in a spot, write the corresponding value (ex. A1 fills in the top left corner)\n");
    
    //Declaring strings that make up the game board
    char line1[11] = "   |   |   "; //Line 1 of the game board
    char line2[11] = "   |   |   "; //Line 2 of the game board
    char line3[11] = "   |   |   "; //Line 3 of the game board
    char line4[11] = "-----------"; //Horizontal lines on the game board
    int a[4][4]; //Counter to check if someone won the game

    for (int i = 1; i <= 3; ++i) 
    {
        for (int n = 1; n <= 3; ++n)
        a[i][n] = 0;
    }
    
        string s = GetString(); 
        if (s[0] == 'A' || s[0] == 'a')
        {
            if(s[1] == '1')
            {
                a[1][1] = 1;
                line1[1] = 'x';
            }
            else if(s[1] == '2')
            {
                a[1][2] = 1;
                line1[5] = 'x';
            }
            else if(s[1] == '2')
            {
                a[1][3] = 1;
                line1[9] = 'x';
            }
        }
        if (s[0] == 'B' || s[0] == 'b')
        {
            if(s[1] == '1')
            {
                a[2][1] = 1;
                line2[1] = 'x';
            }
            else if(s[1] == '2')
            {
                a[2][2] = 1;
                line2[5] = 'x';
            }
            else if(s[1] == '2')
            {
                a[2][3] = 1;
                line2[9] = 'x';
            }
        }
        if (s[0] == 'C' || s[0] == 'c')
        {
            if(s[1] == '1')
            {
                a[3][1] = 1;
                line3[1] = 'x';
            }
            else if(s[1] == '2')
            {
                a[3][2] = 1;
                line3[5] = 'x';
            }
            else if(s[1] == '2')
            {
                a[3][3] = 1;
                line3[9] = 'x';
            }
        }
        
        printf(" %s\n %s\n %s\n %s\n %s\n", line1, line4, line2, line4, line3); //prints out the gameboard after every choice
    
}