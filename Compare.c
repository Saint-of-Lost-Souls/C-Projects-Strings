#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str_1[] = "abcd";
    char str_2[] = "abcz";

    printf("strncmp: %s, %s, %d\n", str_1, str_2, strcmp(str_1, str_2));
    printf("strncmp: %s, %s, %d\n", str_1, str_2, strncmp(str_1, str_2, 3)); // Compare first 3


    printf("\n\n");
    return EXIT_SUCCESS;
}
