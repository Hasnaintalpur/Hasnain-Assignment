#include <stdio.h>

int main() {
    int input_seconds, hours, minutes, seconds;

    printf("Input Seconds? ");
    scanf("%d", &input_seconds);

    hours = input_seconds / 3600;           
    input_seconds = input_seconds % 3600;  

    minutes = input_seconds / 60;       
    seconds = input_seconds % 60;    

    printf("Hours\tMinutes\tSeconds\n");
    printf("%d\t%d\t%d\n", hours, minutes, seconds);

    return 0;
}
