//Escreva uma função que faça a divisão de dois números inteiros usando somas e subtrações.

#include <stdio.h>

int divide(int, int);

int main() {
    int n1, n2, r;

    printf("Digite o numero a ser dividido: ");
    scanf("%d", &n1);
    printf("Digite o numero que vai dividir: ");
    scanf("%d", &n2);

    if (n2 == 0) {
        printf("Erro: Nao e possivel dividir por zero!\n");
        while(n2 == 0){
            printf("Digite o numero que vai dividir: ");
            scanf("%d", &n2);
        }
    }

    r = divide(n1, n2);
    printf("Resultado da divisao aproximadamente: %d\n", r);

    return 0;
}

int divide(int n1, int n2) {
    int sinal = 1;
    int quociente = 0;

    // Se um (e apenas um) deles for negativo, o resultado será negativo.
    if ((n1 < 0 && n2 > 0) || (n1 > 0 && n2 < 0)) {
        sinal = -1;
    }

    // Transformar ambos em positivos para fazer a conta
    if (n1 < 0) n1 = 0 - n1;
    if (n2 < 0) n2 = 0 - n2;

    
    // Enquanto o n1 for maior ou igual a n2, a gente continua tirando n2 dele
    while (n1 >= n2) {
        n1 = n1 - n2;
        quociente++; // Conta quantas vezes conseguimos subtrair
    }

    // Aplicar o sinal correto ao resultado
    if (sinal == -1) {
        quociente = 0 - quociente;
    }

    return quociente;
}