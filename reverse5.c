#include <stdio.h>
int main() {

    int n;
    int reverse = 0;
    int digit;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while(n != 0) {

        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("reverse =%d", reverse);
    return 0;
}