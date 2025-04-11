#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    for (int temp = num; temp != 0; temp /= 10, ++n);

    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
