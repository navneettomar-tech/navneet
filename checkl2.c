#include <stdio.h>
int main() {
    int a, b;

    printf("Enter first Number: ");
    scanf("%d", &a);

    printf("Enter second Number: ");
    scanf("%d", &b);

    
    if (a > b) {
        printf("largest number = %d", a);

    }
    else {
        printf("largest number = %d", b);
    }

    return 0;
}