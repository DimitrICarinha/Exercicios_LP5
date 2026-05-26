//Escreva uma função que receba um número positivo e imprima sua representação binária.

#include <stdio.h>

void imprimebinario(int);

int main(){
    int n1;
    
    printf("Digite o numero: ");
    scanf("%d", &n1);
    while(n1 < 0){
        printf("Digite o numero positivo: ");
        scanf("%d", &n1);
    }
    printf("O numero %d em binario: ", n1);
    imprimebinario(n1);
    printf("\n");

    return 0;
}

void imprimebinario(int n){

    if (n > 1) {
        imprimebinario(n / 2); 
    }
    
    printf("%d", n % 2);
}
