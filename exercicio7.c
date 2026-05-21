//Escreva uma função que receba uma string (cadeia de caracteres) e retorne 1 se essa for um palín-
// dromo e 0 caso contrário. Um palíndromo é uma palavra ou frase que se lê da mesma maneira nos
//dois sentidos - normalmente, da esquerda para a direita ou ao contrário, da direita para a esquerda.
// Por exemplo, OVO; ARARA; SOCORRAM-ME, SUBI NO ÓNIBUS EM MARROCOS.

#include <stdio.h>
#include <string.h>

int palindromo(char texto[50]);

int main(){
    char texto[50];

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto) - 1] = '\0';

    printf("%d", palindromo(texto));

    return 0;
}

int palindromo(char t[50]){
    int resposta = 1;
    for(int i = 0; i < strlen(t); i++){
        if(t[i] != t[strlen(t) - (1 + i)]){
            resposta = 0;
            return 0;
        }
    }

    return resposta;
}
