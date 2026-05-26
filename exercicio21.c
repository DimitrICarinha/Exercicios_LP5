#include <stdio.h>

int triangulo(int, int, int);

int main(){
    int l1, l2, l3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &l1);
    printf("Digite o valor do segundo lado: ");
    scanf("%d", &l2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &l3);

    printf("Classificacao do triangulo: %d\n", triangulo(l1, l2, l3));

    return 0;
}

int triangulo(int a, int b, int c){
    
    if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
        return 0; 
    }
    
    if (a == b && b == c) {
        return 1; 
    }
    else if (a == b || a == c || b == c) {
        return 2; 
    }
    else {
        return 3;
    }
}