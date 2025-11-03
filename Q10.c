//Write a recursive function to find power of a number (xⁿ).
#include<stdio.h>
int power(int x,int y){
    if (y==0)
    {
        return 1;
    }
    return x * power(x,y-1);
}
int main(){
    int b,e;
    printf("Enter your base:");
    scanf("%d",&b);
    printf("Enter your exponent:");
    scanf("%d",&e);
    printf("%d",power(b,e));
    return 0;
}