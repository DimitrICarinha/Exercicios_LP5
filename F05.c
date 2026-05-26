//funcao fatorial recursiva 

#include <stdio.h>

int fatorial(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));

    return 0;
}

int fatorial(int n){
    if (n == 0 || n == 1)
        return 1;
        
    // Passo recursivo: Multiplica o número 'n' atual pelo fatorial de seu antecessor '(n-1)'.
    // A função chama a si mesma repetidamente, criando uma "pilha" de multiplicações pendentes
    // (ex: 4 * fat(3) -> 4 * 3 * fat(2)...) até atingir o caso base (n == 1), onde a pilha começa a ser resolvida de trás para frente.
    return n * fatorial(n - 1); 
}

int fatorialLiterativo(int n){
    int fat = 1;

    for(int i=1; i<n; i++){
        fat *= i;    
    }
    return fat;
}