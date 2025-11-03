// Write a recursive function to count total digits in a number.
#include <stdio.h>
int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    if (n == 0)
        printf("Total digits: 1\n");
    else
        printf("Total digits: %d\n", countDigits(n));

    return 0;
}
