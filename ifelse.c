#include <stdio.h>
int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    // Condition Agar Number 2 se puri tarha divide ho jaye (Remainder 0 bacha)
    if (number % 2 == 0)  {
        printf("ye number even sam ha.\n");
    }
    else{
        printf("Ye Number ODD visam ha.\n");

    }
    return 0;
}