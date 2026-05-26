//soma 1 ate n;

#include <stdio.h>

int somaN(int);

int main(){
    int n;

    scanf("%d", &n);
    printf("Soma:%d", somaN(n));

    return 0;
}

int somaN(int n){
    if(n==1 || n==0)
        return n;
    return somaN(n-1) + n;
}
 