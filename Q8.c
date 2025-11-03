//Write a recursive function to reverse a number.
#include<stdio.h>
int rev=0;
int reverse(int x){
    if (x==0)
    {
       return rev;
    }
    int ld=x%10;
    rev=rev*10+ld;
    return reverse(x/10);
}

int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    printf("The reverse number is %d",reverse(n));
    return 0;
}