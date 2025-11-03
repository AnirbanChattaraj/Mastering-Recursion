// Sum of first N natural numbers (1 + 2 + 3 + ... + N)
#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, sum(n));
    return 0;
}
