//Escreva uma função que receba um número inteiro positivo x e retorne a soma de todos os inteiros
//positivos entre 1 e x.

#include <stdio.h>

int somaint(int);

int main(){
    int x;

    printf("Digite um numero x: ");
    scanf("%d", &x);

    printf("A soma de todos os numeros entre 1 e %d = %d", x, somaint(x));

    return 0;
}

int somaint(int n1){
    int resultado = 0;
    for(int i= 1; i <= n1; i++){
        resultado = resultado + i;
    }

    return resultado;
}