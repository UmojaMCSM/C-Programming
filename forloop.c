/*
Ask the user for a number (e.g., 5) and use a for loop to print its multiplication table from 1 to 10.
  */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
