//Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

#include<stdio.h>

int fib(int a){
    if(a < 1){
        return 0 ;
    }
    if(a == 1){
        return 1 ;
    }

    else{
        return fib(a - 1) + fib(a - 2);
    }

}

int main(){

    int n ;
    scanf("%d",&n);

    int z ;
    z = fib(n);
    printf("%d",z);

    return 0 ;
}