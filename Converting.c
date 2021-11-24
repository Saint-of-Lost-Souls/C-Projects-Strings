#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    
    int tolower(int c); 
    int toupper(int c); 

    //NOT RECOMMENDED//

    int atoi(const char *str); // Converts string to int
    long int atoi(const char *str); //  Converts string to a long int
    double atof(const char *str); // Converts str to double


    double strtod(const char *str, char **endptr); // Converts string to double
    long int strtol(const char *str, char **endptr, int base); // Converts string to long int

    printf("\n\n");
    return EXIT_SUCCESS;
}

