#include <stdio.h>
int main() {

int leapyear;

printf("Enter a year: ");
scanf("%d", &leapyear);

if (leapyear % 400 == 0) {
    printf("leap year");
}
else if (leapyear % 100 == 0) {
    printf("Not a leapyear");
}
else if (leapyear % 4 == 0) {
    printf("leap year");
}
else {
    printf("Not a leapyear");
}
return 0;
}
