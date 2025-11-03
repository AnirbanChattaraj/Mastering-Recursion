//Write a recursive function to find the GCD (HCF) of two numbers.
#include<stdio.h>
int gcd(int x,int y){
    if (y==0)
    {
        return x;
    }
    return gcd(y,x%y);
}
int main(){
    int a,b;
    printf("Enter your larger number:");
    scanf("%d",&a);
    printf("Enter your smaller number:");
    scanf("%d",&b);
    printf("GCD is %d",gcd(a,b));
    return 0;
}