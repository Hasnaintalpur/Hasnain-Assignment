#include <stdio.h>

int main() {
    int first_number, last_number;
    int sum, product, difference, division, remainder, total;

    printf("Enter 1st number: ");
    scanf("%d", &first_number);

    printf("Enter last number: ");
    scanf("%d", &last_number);

    sum = first_number + last_number;
    product = first_number * last_number;
    difference = first_number - last_number;
    division = first_number / last_number;
    remainder = first_number % last_number;
    total = sum + product + difference + division + remainder;

    printf("\nSum of %02d and %02d is: %02d\n", first_number, last_number, sum);
    printf("Product of %02d and %02d is: %02d\n", first_number, last_number, product);
    printf("Difference between %02d and %02d is: %02d\n", first_number, last_number, difference);
    printf("Division of %02d and %02d is: %02d\n", first_number, last_number, division);
    printf("Remainder of %02d and %02d is: %02d\n", first_number, last_number, remainder);
    printf("-------------------------------------------\n");
    printf("Total is: %02d\n", total);

    return 0;
}
