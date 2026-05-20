#include <stdio.h>

int multiplica(int, int);

int main() {
    int n1, n2, r;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    r = multiplica(n1, n2);
    printf("Resultado: %d\n", r);

    return 0;
}

int multiplica(int n1, int n2) {
    int resultado = 0;

    // Se o segundo número for negativo, invertemos o sinal de ambos.
    // "0 - n" para negativar ou positivar sem usar multiplicação.
    if (n2 < 0) {
        n1 = 0 - n1;
        n2 = 0 - n2;
    }

    // Somamos n1 a si mesmo n2 vezes
    for (int i = 0; i < n2; i++) {
        resultado += n1;
    }

    return resultado;
}