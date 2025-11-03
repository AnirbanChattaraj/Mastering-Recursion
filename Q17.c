//Write a recursive function to calculate the Nth Fibonacci number.
#include<stdio.h>
int fibo(int x){
    if (x==1 || x==2)
    {
        return 1;

    }
    return fibo(x-1)+ fibo(x-2);
}
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    printf("Nth Fibonacci number is :%d",fibo(n));
    return 0;
}