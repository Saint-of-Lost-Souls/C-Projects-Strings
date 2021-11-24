#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strstr: Locate group of chars within a string

// Find the first occurence of another string within a string
// "This is a sample string"
//            ------

int findSubstring(char str[], char sub[])
{
    char *psub = strstr(str, sub);
    return psub ? psub - str : -1; // Find the index of the substring, else return -1
}
void printSubstring(char str[], char sub[], int index)
{
    printf("Find substring \"%s\":\n", sub);
    printf("%s\n", str);
    if (index >= 0)
    {
        for (int i = 0; i < index + strlen(sub); i++)
        {
            printf("%c", i < index ? ' ' : '-');
        }
    }
}

int main()
{
    char str[] = "This is a sample string";
    char substring[] = "sample";
    int index = findSubstring(str, substring);
    printSubstring(str, substring, index);

    printf("\n\n");
    return EXIT_SUCCESS;
}
