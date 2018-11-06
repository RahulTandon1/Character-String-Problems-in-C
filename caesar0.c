// an attempt to implement the caesar shift cipher

/* 
i know that this code itself isn't logically correct, given the fact that it won't work for the letter 'z'. 
Also, it doesn't preserve case as of now.
*/


/*
steps
get key
get plaintext
encipher
print out
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string encipher(string plaintext, int KEY);

int main(int argc, string argv[])
{
    int KEY = atoi(argv[1]);
    string plaintext = get_string("Plaintext: ");    // declaring & assigning varibale for plaintext
    string ciphertext = encipher(plaintext, KEY);   //  declaring & assigning value of enciphered text
    printf("%s\n", ciphertext); //  printing out the enciphered text
}

string encipher(string plaintext, int KEY) // enciphers the plaintext and then prints it out
{
    char ciphertext[strlen(plaintext)]; // declaring varibale for ciphertext
    int shiftedAsciiValue;  //  declaring variable, that will be used for the ascii value of the encipher char

    // enciphering
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
         shiftedAsciiValue= (int) plaintext[i] + KEY;
         ciphertext[i] = (char) shiftedAsciiValue;
    }

    //returning the enciphered text
    return ciphertext;
}
