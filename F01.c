#include <stdio.h> 
// resolver problemas com funcoes. aula do dia 12/05
// resolver em blocos

int soma(int,int);

int main(){
    int n1 = 1, n2 = 2, z;

    //recebe o retorno da funcao soma.
    z = soma(n1,n2);
    printf("%d", z);

    return 1;
}

int soma(int n1, int n2){
    //quando a funcao "soma" é chamada ele ira executar este codigo.
    //as variaveis podem ter o mesmo nome aqui dentro e terem valores diferentes, sao variaveis diferentes (n1 e n2).
    n1 = n1 + 2; // n1 = 1 + 2, portanto n1 se torna 3;
    return n1 + n2;
}