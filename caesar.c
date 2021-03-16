#include <stdio.h>  
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //the program just allow one argument
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    else if (argc == 2)
    {
        //size of argument count, so it can be used on the loop
        int argvlen = strlen(argv[1]);    
        
        //converts char to an integer (key)
        int key = atoi(argv[1]);  
        int k;
        
        //loop that validates the key
        for (int i = 0; i < argvlen; i++)
        {
            //if the key is other character than ascii numbers, the program stops
            if (argv[1][i] < 48 || argv[1][i] > 57)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        //get user input
        string plaintext = get_string("Plaintext: ");
        
        //loop that iterates through every character
        for (k = 0; k < strlen(plaintext); k++)
        {
            
            //checks if it is uppercase (65 == 'A'), (90 == 'Z')
            if (plaintext[k] >= 65 && plaintext[k] <= 90)
            {
                plaintext[k] = plaintext[k] - 65;
                plaintext[k] = plaintext[k] + key;
                plaintext[k] = plaintext[k] % 26;
                plaintext[k] = plaintext[k] + 65;
            }
           
            //checks if it is lowercase 
            if (plaintext[k] >= 97 && plaintext[k] <= 122)
            {
                plaintext[k] = plaintext[k] - 97;
                plaintext[k] = plaintext[k] + key;
                plaintext[k] = plaintext[k] % 26;
                plaintext[k] = plaintext[k] + 97;
            }
            
            else
            {
                plaintext[k] = plaintext[k];
            }
           
        }
        //prints the chiphertext string
        printf("ciphertext: %s\n", plaintext);
    }    
}    
