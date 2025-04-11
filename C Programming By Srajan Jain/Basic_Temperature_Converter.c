#include <stdio.h>

int main() {
    float temp;
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Fahrenheit = %.2f°F\n", (temp * 9 / 5) + 32);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Celsius = %.2f°C\n", (temp - 32) * 5 / 9);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
