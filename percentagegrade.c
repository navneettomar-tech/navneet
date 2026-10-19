#include <stdio.h>
int main() {

    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &marks3);

    printf("Enter marks of subject 4: ");
    scanf("%f", &marks4);

    printf("Enter marks of subject 5: ");
    scanf("%f", &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5;


    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if(percentage >= 90) {
        printf("Grade A");
    }
    else if(percentage >= 80) {
        printf("Grade B");              
    }
    else if(percentage >= 70) {
        printf("Grade C");
    }
    else if(percentage >= 60) {
        printf("Grade D");
    }
    else if(percentage >= 33) {
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }

    return 0;
}