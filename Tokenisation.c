#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strtok: Split string into tokens

// Remove the delimiters and store string tokens in a matrix
// "This, is a. sample-string"
// [0] This
// [1] is
// [2] a
// [3] sample
// [4] string

// Return the number of tokens found in the string
int tokeniseString(char str[], const char delimiters[], int tok_max_len, char tokens[][tok_max_len])
{
    int i;
    char *ptok = str;
    for (i = 0; ptok; i++) // ptok != NULL
    {
        ptok = strtok(i == 0 ? ptok : NULL, delimiters);
        strncpy(tokens[i], ptok, ptok ? tok_max_len : 0);
    }
    return i - 1; // return the number of tokens we found
}

void printTokens(int n_tokens, int tok_max_len, char tokens[][tok_max_len], char str[], const char delimiters[])
{
    printf("\n\nTokenisation with delimiters\"%s\":\n", delimiters);
    printf("%s\n", str);
    for (int i = 0; i < n_tokens; i++)
    {
        printf("[%d] %s\n", i, tokens[i]);
    }
}
int main()
{
    char str[] = "This, is a. sample-string";
    const char delimiters[] = " ,.-";
    int tok_max_len = sizeof(str);
    char tokens[tok_max_len][tok_max_len], str_cpy[tok_max_len];

    strncpy(str_cpy, str, tok_max_len);
   
    int n_tokens = tokeniseString(str_cpy, delimiters, tok_max_len, tokens);
    printTokens(n_tokens, tok_max_len, tokens, str, delimiters);


    printf("\n\n");
    return EXIT_SUCCESS;
}
