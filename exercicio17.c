//Escreva uma função que recebe um inteiro e imprima esse valor em algarismos romanos. Por
//exemplo, se essa função receber 13 deve imprimir XIII.

#include <stdio.h>

void imprimeRomano(int num);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Os romanos nao possuiam representacao para numeros menores ou iguais a zero.\n");
    } else {
        printf("O numero %d em algarismos romanos e: ", numero);
        imprimeRomano(numero);
        printf("\n");
    }

    return 0;
}

void imprimeRomano(int num) {
    
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for (int i = 0; i < 13; i++) {
        while (num >= valores[i]) {
            printf("%s", simbolos[i]);
            num = num - valores[i]; 
        }
    }
}