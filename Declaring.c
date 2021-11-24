#include <stdio.h>
#include <stdlib.h>

int main()
{   
    

    /* char fancy_string[10];

    // A string is nothng more than an array of characters
    // So, there are no built-in operators in C for processing strings
    // The standard library provides many functions for strings
    // Also, remember about the null character! Reserve one space for Null character

    char str[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    // If you specify the size of the array, and it is bigger than the chars, you don't need to add \0- C will fill in the blanks, like adding 0 to an int array
    char str[10] = {'H', 'e', 'l', 'l', 'o', '!'}; */

    /* char str[] = "Hello!";
    str[0] = 'Y'; // Change H to Y
    
    const char str[] = "Hello!";
    str[0] = 'Y'; // Not allowed

    char *str = "Hello!";
    str[0] = 'Y'; // Not allowed program crash
    str = "Another string"; // Allowed */

    char str[] = "This course is boring";
    printf("%s\n", str);
    printf("%s\n", &str[15]); // Start printing from index 15
    printf("%.4s\n", str);    // Print the first 4 characters
    
    printf("\n");

    /* char days[][10] = { // Matrix- unspecified rows, 10 columns
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days[i]);
    }
  */
    char *days[] = 
    { // One-dimensional array made of pointers
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days[i]);
    }
 
    // Acquire

    char input_str[10];
    scanf("%s", input_str);

    // Define the length of input_str carefully! If the input is longer than 9 chars, it will start writing outside the memory
    // Ignore the whitespace character before a non-whitespace character eg. "     Shade" Will start writing once it gets to a non-whiespace character
    // Will stop at the first whitespace reached eg "Shade is cool" stop after Shade
    // Read just one word
 
    printf("\n\n");
    return EXIT_SUCCESS;
}
