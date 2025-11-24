#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Error: invalid input. Please enter an integer.\n");
        return EXIT_FAILURE;
    }

    if (n % 2 == 0)
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);

    return EXIT_SUCCESS;
}