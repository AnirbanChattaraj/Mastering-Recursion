//Write a recursive function to find the sum of all even digits in a number.
#include <stdio.h>

int even(int x) {
    if (x == 0)
        return 0; 
    int digit = x % 10;  
    if (digit % 2 == 0)
        return digit + even(x / 10);  
    else
        return even(x / 10);  
}
int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int result = even(n);
    printf("Sum of even digits: %d\n", result);
    return 0;
}
