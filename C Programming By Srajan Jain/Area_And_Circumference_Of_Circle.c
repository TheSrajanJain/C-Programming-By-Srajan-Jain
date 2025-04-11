#include <stdio.h>
#define PI 3.1416

int main() {
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", PI * radius * radius);
    printf("Circumference = %.2f\n", 2 * PI * radius);

    return 0;
}
