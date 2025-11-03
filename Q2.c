//Write a recursive function to print numbers from N to 1.
#include<stdio.h>
void increasing(int x){
    if (x==0)
    {
        return;
    }
    printf("%d\n",x);
    increasing(x-1);
    
}
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}