#include <stdio.h>

int main () {

    int arr[5];
    int i;

    printf("Enter 5 Number :\n");

    for(i = 0; i < 5; i++) {

        scanf("%d", &arr[i]);
    }
    printf("array elements are:\n");

    for(i = 0; i < 5; i++) {
        
        printf("%d ", arr[i]);
    }
    return 0;
}