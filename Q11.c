#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, digit5, sum;

    printf("Please enter a five-digit number: ");
    scanf("%d", &number);

    digit1 = (number / 10000) % 10;
    digit2 = (number / 1000) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 10) % 10;
    digit5 = number % 10;

    printf("Separated from one another by three spaces: %d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);

    sum = digit1 + digit2 + digit3 + digit4 + digit5;
    printf("Sum of the five digits: %d\n", sum);

    return 0;
}
