#include <stdio.h>
#include <locale.h>

void gerarTabelaFahrenheitParaCelsius() {

    for (int f = 50; f <= 150; f++) {
        float c = 5.0 * (f - 32) / 9.0;

        printf("     %4d F       |     %8.2f C\n", f, c);

        if (f % 10 == 0 && f != 150) {
            printf("-------------------------------------\n");
        }
    }

    printf("=====================================\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    gerarTabelaFahrenheitParaCelsius();

    return 0;
}