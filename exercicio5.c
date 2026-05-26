// Escreva uma função que receba um número inteiro e retorne 1 se esse for primo e 0 caso contrário.

#include <stdio.h>

int ehPrimo(int);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("O numero %d e PRIMO.\n", numero);
    } 
    else {
        printf("O numero %d NAO e primo.\n", numero);
    }

    return 0;
}

int ehPrimo(int numero) {
    
    if (numero <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }

    return 1; 
}