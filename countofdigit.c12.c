#include <stdio.h>
int main() {

    int n, digit, count = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while(n > 0) {

        digit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    printf("Total of digits = %d", count);

    return 0;
}