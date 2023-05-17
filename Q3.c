 #include <stdio.h>

int main() {
    float basicPay, houseRent, medicalAllowance, computerAllowance, totalPay;

    printf("Please enter Basic pay: ");
    scanf("%f", &basicPay);

    houseRent = 0.4 * basicPay;
    medicalAllowance = 0.18 * basicPay;
    computerAllowance = 0.15 * basicPay;

    totalPay = basicPay + houseRent + medicalAllowance + computerAllowance;

    printf("\n-------------------------------------------");
    printf("\n\t\tPAY SLIP");
    printf("\n\nBasic pay : \t\t\t%f", basicPay);
    printf("\nHouse Rent (40%) : \t\t%f", houseRent);
    printf("\nMedical Allowance (18%) : \t%f", medicalAllowance);
    printf("\nComputer Allowance (15%) : \t%f", computerAllowance);
    printf("\n-------------------------------------------");
    printf("\nTotal pay: \t\t\t%f\n", totalPay);

    return 0;
}
