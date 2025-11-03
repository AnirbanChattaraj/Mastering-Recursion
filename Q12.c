//Write a recursive function to print all odd numbers from N to 1.
#include <stdio.h>
void printodd(int n)
{
    if (n == 0)
        return;
    printodd(n - 1);
    if (n % 2 != 0)
        printf("%d\n", n);
}
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    printodd(n);

    return 0;
}