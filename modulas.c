#include <stdio.h>
int main() {
    int a, b, remainder;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter first number: ");
    scanf("%d", &b);

    remainder = a % b;
    
    printf("remainder =%d\n", remainder);

    return 0;
}