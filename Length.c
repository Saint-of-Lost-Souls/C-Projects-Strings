#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char my_string[] = "I love programming in C!";
    printf("The string: \"%s\"\n", my_string);

    // Calculate the length
    /* int i;
    for (i = 0; my_string[i] != '\0'; i++); // Don't include null character
    
    printf("String length (from scratch): %d\n", i); // Excluding NULL */
    printf("String length (built in): %lld\n", strlen(my_string)); // Excluding NULL
    printf("Sizeof string: %lld\n", sizeof(my_string));            // Includng NULL
    printf("\n\n");
    return EXIT_SUCCESS;
}
