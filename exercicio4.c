// Escreva uma função que receba um número inteiro e retorne o inverso desse número. Por exemplo,
// se a função receber 123456 deve retornar 654321.

#include <stdio.h>

int inverso(int);

int main(){
    int n1, inv;

    printf("Numero: ");
    scanf("%d", &n1);

    inv = inverso(n1);
    
    // Mostra o resultado que estava faltando no seu código
    printf("O inverso de %d e: %d\n", n1, inv);

    return 0;
}

int inverso(int n1){
    int reverso = 0;
    int resto;

    
    while (n1 != 0) {
        resto = n1 % 10;               // Pega o último dígito
        reverso = (reverso * 10) + resto; 
        n1 = n1 / 10;                 
    }

    return reverso;
}