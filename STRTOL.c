#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

// long int strtol(const char *str, char **endptr, int base) = Converts string to long int

int main()
{
    char str[] = "99 0xFF";

    // Initialises the pstart pointer to the address of the string
    char *pend, *pstart = str;

    // Inside the loop it is going to convert the string starting from pstart's address
    // Then it is going to save pend's address
    // Then the value of errno is going to be checked for a range error
    // Also going to check whether pend is the same address as pstart
    // After each iteration, the address is put in pend, pstart is refreshed

    while (true)
    {

        long num = strtol(pstart, &pend, 0); 

        printf("----------------------\n");
        printf("Converting: %s\n", pstart);
        printf("errno: %d %s\n", errno, errno == ERANGE ? "(ERRNO - NO RANGE)" : "");
        printf("%s\n", pend == pstart ? "pend == pstart(ERR)" : "pend != pstart (OK)");

        if (errno || pend == str)
        {
            printf("Conversion error!\n");            
        }
        else
        {
            printf("Conversion: %ld\n", num);
        }

        if (pend == pstart)
        {
            break;
        }

        pstart = pend;
    }

    printf("\n\n");
    return EXIT_SUCCESS;
}
