#include <stdio.h>

void imprimeBinario(int);

int main(){
    int n;

    scanf("%d", &n);
    imprimeBinario(n);
}

void imprimeBinario(int n){
    if(n/2==0){
        printf("%d",n%2);
    }
    else{
        imprimeBinario(n/2);
        printf("%d",n%2);
    }
}