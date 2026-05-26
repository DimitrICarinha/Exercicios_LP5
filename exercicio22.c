//Escreva uma função que receba um número e retorne o menor inteiro positivo cujo quadrado é
//superior ao valor dado.

int mip(int);

#include <stdio.h>

int main(){
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("%d", mip(n1));

    return 0;
}

int mip(int n1){
    for(int i = 0; i < n1; i++){
        if(i * i > n1){
            return i;
        }
    }
}