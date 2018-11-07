/**
 * Lam Tran
 * Harvard CS50 2016
 * 
 * Vigenere Cipher
 * Creating a vigenere cipher that utilizes the command line to take input
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Checking if the key is valid
    if (argc != 2)
    {
        printf("Please put in one word\n");
        return 1;
    }
    
    //Declaring and initializing variables
    int k = strlen(argv[1]), letter[k];
    
    //Esetablishing cipher/checking if key is valid
    for (int i = 0; i < k; ++i)
    {
        if(isalpha(argv[1][i]))
            letter[i] = (int) argv[1][i] % 97 % 65;
        else
        {
            printf("Please put in one word\n");
            return 1;
        }
    }
    
    //Asking user for input
    printf("plaintext: ");
    string plaintext = get_string();
    
    if(plaintext != NULL)
    {
        //Printing encoded text
        printf("ciphertext: ");
        for (int i = 0, c = 0, n = strlen(plaintext); i < n; ++i)
        {
            if(isupper(plaintext[i])) //Uppercase letters
            {
                printf("%c", 65 + ((plaintext[i] + letter[c % k]) % 65 % 26));
                ++c;
            }
            else if(islower(plaintext[i])) //Lowercase letters
            {
                printf("%c", 97 + ((plaintext[i] + letter[c % k]) % 97 % 26));
                ++c;
            }
            else //Non-alphabet characters
                printf("%c", plaintext[i]);
        }
        printf("\n");
        return 0;
    }
}