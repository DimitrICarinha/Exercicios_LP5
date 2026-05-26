#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo constantes para o tamanho da matriz (facilita manutenção do código)
#define LINHAS 3
#define COLUNAS 4

// Protótipos das funções (avisam ao compilador que elas existem e como devem ser chamadas)
// Em funções que recebem matrizes, a definição do número de colunas é obrigatória
int maiorElemento(int m[][COLUNAS], int l, int c); 
void matrizIdentidade(int m[][COLUNAS], int l, int c);

int main(){
    int m[LINHAS][COLUNAS]; // Declaração da matriz utilizando as constantes 3x4
    
    srand(time(NULL)); // Alimenta a semente do rand() com o tempo atual para gerar números realmente aleatórios
    
    printf("--- MATRIZ ALEATORIA ---\n");
    // Loops para preencher e exibir a matriz com números aleatórios
    for(int i = 0; i < LINHAS; i++){ // Loop externo: controla as linhas (de 0 a 2)
        for(int j = 0; j < COLUNAS; j++){ // Loop interno: controla as colunas (de 0 a 3)
            m[i][j] = rand() % 100; // Gera um número aleatório entre 0 e 99 e guarda na matriz
            printf("%d\t", m[i][j]); // Imprime o número gerado seguido de uma tabulação (\t)
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz para organizar a exibição
    }
    
    // Chama a função maiorElemento e imprime o valor retornado por ela
    printf("\nMaior elemento = %d\n", maiorElemento(m, LINHAS, COLUNAS));

    printf("\n-----------------------------------\n");

    // Chama a função para transformar a matriz 'm' atual em uma matriz identidade
    matrizIdentidade(m, LINHAS, COLUNAS);

    printf("\n--- MATRIZ IDENTIDADE ---\n");
    // Loops para exibir a matriz agora modificada pela função matrizIdentidade
    for(int i = 0; i < LINHAS; i++){ 
        for(int j = 0; j < COLUNAS; j++){
            printf("%d\t", m[i][j]); // Imprime o elemento atual (que agora será 0 ou 1)
        }
        printf("\n"); // Quebra de linha para formatação visual
    }

    return 0; // Indica que o programa terminou com sucesso
}

// Função que encontra e retorna o maior valor dentro da matriz
int maiorElemento(int m[][COLUNAS], int l, int c){
    int maior = m[0][0]; // Inicializa a variável 'maior' com o primeiro elemento da matriz
    
    // Percorre toda a matriz comparando os valores
    for(int i = 0; i < l; i++){ 
        for(int j = 0; j < c; j++){
            if(m[i][j] > maior) // Se o elemento atual for maior do que o guardado...
                maior = m[i][j]; // ...atualiza a variável 'maior' com este novo valor máximo
        }
    }
    return maior; // Retorna o maior valor encontrado para quem chamou a função
}

// Função que transforma a matriz passada em uma matriz identidade
void matrizIdentidade(int m[][COLUNAS], int l, int c){
    // Percorre toda a matriz posição por posição
    for(int i = 0; i < l; i++){ 
        for(int j = 0; j < c; j++){
            if(i == j) // Se o índice da linha for igual ao da coluna (Diagonal Principal)
                m[i][j] = 1; // Atribui o valor 1
            else // Caso contrário (fora da diagonal principal)
                m[i][j] = 0; // Atribui o valor 0
        }
    }
}