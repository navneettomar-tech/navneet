#include <stdio.h>

struct student
{
    char name[20];
    int age;
    int marks;
};

int main()
{
    struct  student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enetr age: ");
    scanf("%d", &s.age);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("\nStudent Details\n");
    printf("Name = %s\n", s.name);
    printf("Age = %d\n", s.age);
    printf("Marks = %d\n", s.marks);

    return 0;
}
