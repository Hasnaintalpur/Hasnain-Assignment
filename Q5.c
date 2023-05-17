#include <stdio.h>

int main() {
    int amount;
    
    printf("Enter any amount: ");
    scanf("%d", &amount);

    printf("%d\t", amount / 500);
    amount %= 500;
    printf("%d\t", amount / 100);
    amount %= 100;
    printf("%d\t", amount / 50);
    amount %= 50;
    printf("%d\t", amount / 20);
    amount %= 20;
    printf("%d\t", amount / 10);
    amount %= 10;
    printf("%d\t", amount / 5);
    amount %= 5;
    printf("%d\t", amount / 2);
    amount %= 2;
    printf("%d\t", amount / 1);
    amount %= 1;

    return 0;
}
