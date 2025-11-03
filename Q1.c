//Write a recursive function to print numbers from 1 to N.
#include<stdio.h>
void increasing(int x){
    if (x==0)
    {
        return;
    }
    increasing(x-1);
    printf("%d\n",x);
    
}
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}