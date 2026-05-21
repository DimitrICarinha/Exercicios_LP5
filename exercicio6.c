//Escreva uma função que receba um número inteiro e retorne seu fatorial.

#include <stdio.h>

int fatorial(int);

int main(){
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    printf("O fatorial: %d", fatorial(numero));
}

int fatorial(int n){
    int fat = 1;

    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }

    return fat;
}