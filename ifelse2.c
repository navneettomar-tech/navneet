#include <stdio.h>
int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Number is Positive");
    }
    else {
        printf("Number is Negative");
    } 
    return 0;
}