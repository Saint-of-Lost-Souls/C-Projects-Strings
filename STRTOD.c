#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

// double strtod(const char *str, char **endptr); // Converts string to double

int main()
{
    char str[] = "99.456 100.6 4.98264";

    char *pend, *pstart = str;

    while (true)
    {

        double num = strtod(pstart, &pend);

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
            printf("Conversion: %.2f\n", num);
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
