#include <stdio.h>

int main()
{
    char name[50];
    char seat_no[15];
    float marks_english, marks_electronics, marks_mathematics, marks_programming;
    float total_marks, percentage;

    printf("Enter name of Student? ");
    scanf("%s", name);

    printf("Enter Seat No? ");
    scanf("%s", seat_no);

    printf("Enter marks of English? ");
    scanf("%f", &marks_english);

    printf("Enter marks of Basic Electronics? ");
    scanf("%f", &marks_electronics);

    printf("Enter marks of Mathematics? ");
    scanf("%f", &marks_mathematics);

    printf("Enter marks of Computer Programming? ");
    scanf("%f", &marks_programming);

    total_marks = marks_english + marks_electronics + marks_mathematics + marks_programming;
    percentage = (total_marks / 400) * 100;

    printf("\n\tM A R K S H E E T\n");
    printf("Name : %s\t\tSeat No : %s\n", name, seat_no);
    printf("-------------------------------------------\n");
    printf("\tSubjects\t\tMarks\n");
    printf("-------------------------------------------\n");
    printf("1. English\t\t\t : %.0f\n", marks_english);
    printf("2. Basic Electronics\t\t : %.0f\n", marks_electronics);
    printf("3. Mathematics\t\t\t : %.0f\n", marks_mathematics);
    printf("4. Computer Programming\t\t : %.0f\n", marks_programming);
    printf("-------------------------------------------\n");
    printf("Total : %.0f \tPercentage : %.2f%%\n", total_marks, percentage);

    return 0;
}
