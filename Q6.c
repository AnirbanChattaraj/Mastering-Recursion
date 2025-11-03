//Write a recursive function to find the product of digits of a number.
#include <stdio.h>
int product(int x) {
    if (x == 0)
        return 1; 
    return (x % 10) * product(x / 10); 
}
int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    printf("The product of digits is: %d\n", product(n));
    return 0;
}
