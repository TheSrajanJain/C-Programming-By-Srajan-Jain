#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("The no. id Even");
    }
    else{
        printf("The no. id Odd");
    }
    return 0;
}