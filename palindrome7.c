#include <stdio.h>
int main() {

    int n, original, digit, reverse = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) { 

        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == original) {
        printf("Palindrome Number");
    }
    else{
        printf("Not a Palindrome Number");
    }
    return  0;
}