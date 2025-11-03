//Write a recursive function to find the LCM of two numbers using GCD logic.
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;           
    return gcd(b, a % b);  
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("LCM is %d", lcm(a, b));
    return 0;
}
