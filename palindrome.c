#include <stdio.h>
int main ()
{
    int n, orignal, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    orignal = n;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if(orignal == reverse)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;

    
}