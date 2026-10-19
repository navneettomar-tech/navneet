#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

     printf("Enter second number: ");
     scanf("%d", &b);

     if (a > b) {
        printf("First number is larger");
     } else {
        printf("First second is larger");

     }

     return 0;
    }