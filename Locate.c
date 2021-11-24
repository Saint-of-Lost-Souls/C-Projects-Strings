#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strchr: Locate first occurrence of a char

// Find all the occurences of a char in a string
// "This is a sample string"
//     ^  ^   ^      ^

int findAllOccurences(char str[], char c, int indexes[])
{
    int found = 0;
    char *pstr = str;
    do
    {
        pstr = strchr(pstr, c);
        if (pstr)
        {
            indexes[found++] = pstr - str;
            pstr++; // Move the pointer along
        }

    } while (pstr); // != NULL
    return found;
}

void printOccurences(char str[], int occurences_indexes[], int found)
{
    char pattern[strlen(str) + 1];
    memset(pattern, ' ', sizeof(pattern));
    for (int i = 0; i < found; i++)
    {
        pattern[occurences_indexes[i]] = '^';
    }
    pattern[sizeof(pattern) - 1] = '\0';
    printf("%s\n", str);
    printf("%s\n", pattern);
}
int main()
{
    char str[] = "This is a sample string";
    int occurences_indexes[sizeof(str)]; // This ensures there is enough room in the array
    int found = findAllOccurences(str, 's', occurences_indexes);
    printOccurences(str, occurences_indexes, found);

    printf("\n\n");
    return EXIT_SUCCESS;
}
