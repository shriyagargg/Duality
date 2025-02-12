// 240648_shriyagarg_l1
//Calculate the nth Fibonacci number using the formula: F(n) = F(n - 1) + F(n - 2), where F(0) = 0 and F(1) = 1.

#include <stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d\n", fibonacci(n));
    return 0;
}