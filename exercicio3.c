#include <stdio.h>

int potencia(int, int);

int main() {
    int x, y, r;

    printf("Digite o valor de x (base): ");
    scanf("%d", &x);
    printf("Digite o valor de y (expoente): ");
    scanf("%d", &y);

    r = potencia(x, y);
    printf("%d elevado a %d e igual a: %d\n", x, y, r);

    return 0;
}

int potencia(int x, int y) {
    // Se y for 0, o loop não roda e a função retorna 1 corretamente (x^0 = 1).
    int r = 1; 

    // Tratamento básico para expoentes negativos (na matemática de inteiros, 
    // qualquer base maior que 1 elevada a um número negativo resultaria em 0).
    if (y < 0) {
        printf("Expoente negativo.");
        return 0;
    }

    // O laço vai rodar 'y' vezes
    for (int i = 0; i < y; i++) {
        r = r * x; // Multiplica o acumulador pela base 'x'
    }

    return r;
}