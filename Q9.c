#include <stdio.h>

int main() {
    int input_days, years, weeks, days;

    printf("Input Days? ");
    scanf("%d", &input_days);

    years = input_days / 365;           // Calculate the number of years
    input_days = input_days % 365;      // Remaining days after calculating years

    weeks = input_days / 7;             // Calculate the number of weeks
    days = input_days % 7;              // Remaining days after calculating weeks

    printf("Years\tWeeks\tDays\n");
    printf("%d\t%d\t%d\n", years, weeks, days);

    return 0;
}
