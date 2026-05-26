#include <stdio.h>

void verificarRestoTreze(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 13 == 5) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int x = 1;
    int y = 50;

    printf("Numeros entre %d e %d que divididos por 13 deixam resto 5:\n", x, y);
    verificarRestoTreze(x, y);

    return 0;
}