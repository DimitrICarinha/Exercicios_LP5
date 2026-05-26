#include <stdio.h>
#include <locale.h>

void encontrarDivisores(int num) {
    if (num <= 0) {
        printf("Por favor, insira um numero inteiro positivo maior que zero.\n");
        return;
    }

    printf("Os divisores de %d sao: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 24; 

    encontrarDivisores(numero);

    return 0;
}