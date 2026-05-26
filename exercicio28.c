#include <stdio.h>

void fibonacci(int n) {
    if (n <= 0) {
        printf("Por favor, insira um numero maior que 0.\n");
        return;
    }

    unsigned long long t1 = 0, t2 = 1, proximoTermo;

    printf("Serie de Fibonacci (%d termos): ", n);

    for (int i = 1; i <= n; i++) {
        printf("%llu ", t1);

        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }
    printf("\n");
}

int main() {
    int termos = 15; 
    
    fibonacci(termos);
    
    return 0;
}