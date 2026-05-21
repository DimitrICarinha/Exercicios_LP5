#include <stdio.h>

// Protótipos das funções
int ehPrimo(int n);
int np(int n1, int n2);

int main(){
    int x, y;
    
    printf("Digite o x: ");
    scanf("%d", &x);
    printf("Digite o y: ");
    scanf("%d", &y);

    printf("A quantidade de numeros primos entre eles: %d\n", np(x, y));

    return 0;
}

int ehPrimo(int n) {
    if (n <= 1) return 0; 
    
    for (int j = 2; j * j <= n; j++) {
        if (n % j == 0) {
            return 0; 
    }
    return 1; 
    }
}

int np(int n1, int n2){
    int resposta = 0;

    for (int i = n1 + 1; i < n2; i++) {
        if (ehPrimo(i)) {
            resposta++;
        }
    }   

    return resposta;
}