#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
