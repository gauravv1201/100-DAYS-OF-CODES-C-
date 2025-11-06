//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swap
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swap
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}