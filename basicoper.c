/*
 Create a program that takes two integers from the user and prints their sum, difference, product, and quotient.
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    // Note: Integer division truncates decimals
    printf("Quotient: %d\n", a / b); 

    return 0;
}
