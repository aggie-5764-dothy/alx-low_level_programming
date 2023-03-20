#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));

#if (__WORDSIZE == 32)
    printf("Size of a double: %lu byte(s)\n", sizeof(double));
#elif (__WORDSIZE == 64)
    printf("Size of a double: %lu byte(s)\n", sizeof(double));
    printf("Size of a long double: %lu byte(s)\n", sizeof(long double));
#endif

    return (0);
}
