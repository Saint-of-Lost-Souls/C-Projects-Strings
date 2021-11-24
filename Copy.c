#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char my_string[] = "I love programming in C!";
    printf("The string: \"%s\"\n", my_string);

    // Calculate the length
    int i;
    for (i = 0; my_string[i] != '\0'; i++); // Don't include null character
    
    printf("String length (from scratch): %d\n", i);
    printf("String length (built in): %lld\n", strlen(my_string));
    printf("Sizeof string: %lld\n", sizeof(my_string)); // Includng null character
    printf("\n\n");

    // Copy: strcpy, strncpy

    char another_string[] = "Programming is funny";
    printf("Before: \"%s\"\n", my_string);
    printf("After: \"%s\"\n", strcpy(my_string, another_string)); // DO NOT DO  THIS

    char another_long_string[] = "This is a very, very long string like nothing you have ever seen before except that one time at band camp";
    printf("Before: \"%s\"\n", my_string);
    printf("After: \"%s\"\n", strncpy(my_string, "Hello", sizeof(my_string)));

    printf("Before: \"%s\"\n", my_string);
    strncpy(my_string, another_long_string, sizeof(my_string));
    my_string[sizeof(my_string) - 1] = '\0'; // Set the last character manually
    printf("After: \"%s\"\n", my_string);

    
    printf("\n\n");
    return EXIT_SUCCESS;
}
