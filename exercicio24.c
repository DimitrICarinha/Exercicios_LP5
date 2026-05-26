#include <stdio.h>

unsigned long long fatorial(int num) {
    unsigned long long fat = 1;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

unsigned long long combinacao(int n, int r) {
    if (r > n) return 0; 
    
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}

int main() {
    int n = 5;
    int r = 3;
    
    unsigned long long resultado = combinacao(n, r);
    
    printf("O numero de combinacoes de %d objetos tomados %d de cada vez e: %llu\n", n, r, resultado);
    
    return 0;
}