// Write a recursive function to print all even numbers from 1 to N.
#include <stdio.h>
void printEven(int n)
{
    if (n == 0)
        return;
    printEven(n - 1);
    if (n % 2 == 0)
        printf("%d\n", n);
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    printEven(n);

    return 0;
}
