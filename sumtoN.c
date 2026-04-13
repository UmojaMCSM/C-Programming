/*
Write a program that calculates the sum of all integers from 1 up to a number N provided by the user.
  */

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter value for N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i; // Same as sum = sum + i
    }

    printf("The sum of 1 to %d is: %d\n", n, sum);
    return 0;
}
