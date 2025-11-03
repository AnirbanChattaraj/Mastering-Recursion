//Write a recursive function to find the sum of digits of a number.
#include<stdio.h>
int sum(int x,int s){
    if (x==0)
    {
        return 0;
        printf("%d",s);
    }
   return x%10 + sum(x/10,0);
    
}
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    printf("The sum of natural numbers:%d",sum(n,0));
    return 0;
}