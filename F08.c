#include <stdio.h>

int fibonacci(int);
int fibonacciInterativo(int);

int main(){
    int n;

    scanf("%d", &n);
    printf("%d-e+simo termo: %d\n",n,fibonacci(n));
    printf("%d (feito de forma interativa)",fibonacciInterativo(n));
}

int fibonacci(int n){
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int fibonacciInterativo(int n){
    int fib=0,fib1=1,fib2=0;

    for(int i = 1; i <=n; i++){
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return fib;
}