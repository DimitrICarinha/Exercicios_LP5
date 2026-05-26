#include <stdio.h>

int minha_strlen(const char *str) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int minha_strcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

void minha_strncpy(char *destino, const char *origem, int n) {
    int i;
    for (i = 0; i < n && origem[i] != '\0'; i++) {
        destino[i] = origem[i];
    }
    for (; i < n; i++) {
        destino[i] = '\0';
    }
    destino[i] = '\0';
}

void minha_strcat(char *destino, const char *origem) {
    int i = 0;
    while (destino[i] != '\0') {
        i++;
    }
    int j = 0;
    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }
    destino[i] = '\0';
}

void buscar_ocorrencias(const char *texto, const char *sub) {
    int tam_texto = minha_strlen(texto);
    int tam_sub = minha_strlen(sub);
    int encontrou_alguma = 0;

    printf("Buscando \"%s\" em \"%s\":\n", sub, texto);

    for (int i = 0; i <= tam_texto - tam_sub; i++) {
        int j;
        for (j = 0; j < tam_sub; j++) {
            if (texto[i + j] != sub[j]) {
                break;
            }
        }
        if (j == tam_sub) {
            printf("  -> Encontrada na posicao: %d\n", i);
            encontrou_alguma = 1;
        }
    }

    if (!encontrou_alguma) {
        printf("  -> Nenhuma ocorrencia encontrada.\n");
    }
}

int main() {
    char txt1[] = "Algoritmos";
    printf("1. Tamanho de '%s': %d\n\n", txt1, minha_strlen(txt1));

    char comp1[] = "Casaco";
    char comp2[] = "Casaco";
    char comp3[] = "Cavalo";
    printf("2. Comparando '%s' com '%s': %d\n", comp1, comp2, minha_strcmp(comp1, comp2));
    printf("   Comparando '%s' com '%s': %d\n\n", comp1, comp3, minha_strcmp(comp1, comp3));

    char destino_copia[20];
    minha_strncpy(destino_copia, "Abacaxi", 4);
    printf("3. Copia dos 4 primeiros caracteres de 'Abacaxi': %s\n\n", destino_copia);

    char dest_cat[30] = "Bom ";
    minha_strcat(dest_cat, "dia, mundo!");
    printf("4. String concatenada: %s\n\n", dest_cat);

    char frase[] = "o rato roeu a roupa do rei de roma";
    char busca[] = "ro";
    printf("5. ");
    buscar_ocorrencias(frase, busca);

    return 0;
}