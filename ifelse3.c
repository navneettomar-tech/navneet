#include <stdio.h>
int main() {
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Number is positive");
    }
    else {
        printf("Number is negative");
    } 
    return 0;
}