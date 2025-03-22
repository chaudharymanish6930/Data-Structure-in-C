#include <stdio.h>
#include <stdlib.h>

#define MAX_DEGREE 100 // Maximum degree supported

// Function to display the polynomial
void displayPolynomial(int coefficients[], int degree) {
    int first = 1; // Flag to track the first term for proper formatting

    for (int i = degree; i >= 0; i--) {
        if (coefficients[i] != 0) { // Skip terms with zero coefficients
            if (!first) {
                // Print the sign based on coefficient
                printf(" %c ", (coefficients[i] > 0) ? '+' : '-');
            } else {
                // For the first term, just print the sign if it's negative
                if (coefficients[i] < 0) printf("-");
                first = 0; // Reset the first flag
            }

            // Print the absolute value of the coefficient
            if (abs(coefficients[i]) != 1 || i == 0) { // Avoid 1x^n or -1x^n formats
                printf("%d", abs(coefficients[i]));
            }

            // Print the variable and its power if power > 0
            if (i > 0) {
                printf("x");
                if (i > 1) printf("^%d", i);
            }
        }
    }

    // If all coefficients are zero
    if (first) {
        printf("0");
    }

    printf("\n");
}

int main() {
    int degree;
    int coefficients[MAX_DEGREE + 1];

    // Input the degree of the polynomial
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    // Check degree limit
    if (degree > MAX_DEGREE) {
        printf("Error: Degree exceeds the maximum allowed (%d).\n", MAX_DEGREE);
        return 1;
    }

    // Input the coefficients
    printf("Enter the coefficients from highest degree to constant term:\n");
    for (int i = degree; i >= 0; i--) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &coefficients[i]);
    }

    // Display the polynomial
    printf("\nThe polynomial is: ");
    displayPolynomial(coefficients, degree);

    return 0;
}
