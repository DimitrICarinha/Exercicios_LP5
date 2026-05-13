//Numero de letras, vogais e consoantes.

#include <stdio.h> 
#include <string.h>

int ehLetra(char);
int ehVogal(char);
int ehConsoante(char);

int main(){
    char texto[100];
    int contLetra = 0, contVogal = 0, contConsoante = 0;

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto)-1] = '\0';

    for(int i = 0; i < strlen(texto); i++){
        contLetra += ehLetra(texto[i]); //contar numero de letras.;
        contVogal += ehVogal(texto[i]); // ou.
        contConsoante = contConsoante + ehConsoante(texto[i]);
    }

    printf("\nLetra: %d, Vogal: %d, Consoante: %d", contLetra, contVogal, contConsoante);

    return 0;
}

int ehLetra(char l){
    if((l>='A' && l<='Z') || (l>='a' && l<= 'z'))
        return 1; // 1 é verdadeiro
    else // nao precisa do else, apenas colocar o return 0 um tab pra tras.
        return 0; // 0 é falso
}

int ehVogal(char l){
    if(ehLetra(l)){
        if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U')
        return 1;
    }
    return 0;
}

int ehConsoante(char l){
    if(ehLetra(l)){
        if(!ehVogal(l))
        return 1;
    }
    return 0;
}
