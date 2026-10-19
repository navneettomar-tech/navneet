#include <stdio.h>
int main () {

    int leapyear;

    printf("Enter a year: ");
    scanf("%d", &leapyear);

    if (leapyear % 4 == 0) {
        printf("Leap Year");
    }
    else if(leapyear % 100 == 0) {
        printf("Not a leap Year");
    }
    else if(leapyear % 4 == 0) {
        printf("leap Year");
    }
    else {
        printf("Not a leap Year");
    }
    return 0;
}