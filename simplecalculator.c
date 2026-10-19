#include <stdio.h>

int main() {

    int a, b;

    char op;
    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter Operator(+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {

        case '+':
        printf("Result = %d", a + b);
        break;

        case '-':
        printf("Result = %d", a - b);
        break;

        case '*':
        printf("Result = %d" , a * b);
        break;

        case '/':
        printf("Result = %d" , a / b);
        break;

        default:
        printf("Invalid Operator");
    }
    return 0;

}